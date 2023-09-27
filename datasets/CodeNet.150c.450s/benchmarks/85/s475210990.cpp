#include <bits/stdc++.h>
#define INF 1e7

using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    vector<int>l(n),r(n);
    for(int i = 0; i < n; i++) cin >> l[i] >> r[i];
    vector<vector<int>>dp(n,vector<int>(n,INF));
    for(int i = 0; i < n; i++) dp[i][i] = 0;
    for(int p = 2; p <= n; p++)
    {
        for(int i = 0; i+p-1 <= n-1; i++)
        {
            int j = i+p-1;
            int S = INF;
            for(int k = i; k < j; k++) S = min(S,dp[i][k]+dp[k+1][j]+l[i]*r[k]*r[j]);
            dp[i][j] = S;
        }
    }
    cout << dp[0][n-1] << endl;
}
