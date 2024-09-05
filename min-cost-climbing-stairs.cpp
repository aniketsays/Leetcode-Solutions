https://leetcode.com/problems/min-cost-climbing-stairs/


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       vector<int> dp(n);

        for (int i = 0; i<n; i++){
            if (i < 2){
                dp[i] = cost[i];
            } 
            else {
                dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }

        
    }
    return min(dp[n-1], dp[n-2]);
    }

    // Recursion : will have the recursive relation mentioned above with basecases of cost[0] and cost[1] to reach those two points
    // Top Down: Using a DP array to store the returned recursion values
    // Bottom Up: the method mentioned here
    // Optimized: Instead of using an array, use variables to store the results
};