https://leetcode.com/problems/unique-paths/description/

class Solution {
public:
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
        

        // Brute Force - Recursive functions one which travels below and one which travels right and checking base conditions of not being out of bounds + reaching the target cell
        // Better - 2D DP array where dp[i][j] represents number of steps required to reach the i,j th cell. Can happen by travelling rightwards and downwards to target cell
        // Optimized: 2 vectors instead of 2D DP array
        
    }
};