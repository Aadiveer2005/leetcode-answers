class Solution {
private:
 int longestCommonSubsequence(string text1, string text2) {
           int n=text1.size();
           int m=text2.size();
           vector<vector<int>> dp(n+1,vector<int>(m+1,0));
           int i,j;
           for(j=0;j<m;j++)dp[0][j]=0;
            for(i=0;i<n;i++)dp[i][0]=0;
            for(i=1;i<=n;i++)
            {
                  for(j=1;j<=m;j++)
                  {
                      if(text1[i-1]==text2[j-1])
                      dp[i][j]=1+dp[i-1][j-1];
                      else
                      dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
            }
            return dp[n][m];}
public:
    int minInsertions(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        return s.size()-longestCommonSubsequence(s,t);
    }
};