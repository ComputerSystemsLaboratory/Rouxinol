#include<bits/stdc++.h>
using namespace std;
#define INF 100000000

int main()
{
    string S1,S2;
    int n,m;
    cin >> S1 >> S2;
    n=S1.size();m=S2.size();
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    dp[0][0]=0;
    for (int i=1;i<n+1;i++) dp[i][0]=i;
    for (int i=1;i<m+1;i++) dp[0][i]=i;
    for (int i=1;i<n+1;i++)
    {
        for (int j=1;j<m+1;j++)
        {
            if (S1[i-1]==S2[j-1])
            {
                dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]});
            }
            else
            {
                dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1});
            }            
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
