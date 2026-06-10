class Solution {
public:
int f(int i, int j, string& text1, string& text2, int n, int m,
          vector<vector<int>>& dp) {
        if (i == n || j == m)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];
        if (text1[i] == text2[j]) {
            return dp[i][j] = 1 + f(i + 1, j + 1, text1, text2, n, m, dp);
        } else {
            return dp[i][j] = max(f(i, j + 1, text1, text2, n, m, dp),
                                  f(i + 1, j, text1, text2, n, m, dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));

        return f(0, 0, text1, text2, n, m, dp);
    }
    
    int minInsertions(string s) {
        string t = s;
        reverse(t.begin(),t.end());

        return s.size() - longestCommonSubsequence(s, t);
        
    }
};