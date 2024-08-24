https://leetcode.com/problems/longest-common-subsequence/description/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

int n = text1.size(), m= text2.size(); 
        vector<vector<int>> lookup(n+1, vector<int>(m+1, 0));
        
        for(int i=1; i <= n; i++){
            for(int j=1; j <= m; j++){
                if(text1[i-1] == text2[j-1])
                    lookup[i][j] = 1 + lookup[i-1][j-1];
                else
                    lookup[i][j] = max(lookup[i-1][j], lookup[i][j-1]);
            }
        }
        return lookup[n][m];
        

        
        //Brute: Write recursive function while passing in parameters of text1, text2, i and j which are pointers to a particular location of the strings. Write base cases and return the max of both function calls.
        //Top-Down DP: Use recursive calls but store results in a 2D array
        //Bottom-Up DP: Directly initialize a 2D DP array where arr[i][j] signifies the LCS for string 1 at ith and string 2 at jth position
    
    }
};