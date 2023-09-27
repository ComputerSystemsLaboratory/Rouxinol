#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define mp make_pair
#define fi first
#define se second

int main()
{
    int n;cin >> n;
    vector<pair<int,int>> matrix(n);
    int a,b;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        matrix[i]=mp(a,b);
    }
    vector<vector<pair<int,pair<int,int>>>> dp(n,vector<pair<int,pair<int,int>>> (n,mp(INF,mp(-1,-1))));
    for (int i=0;i<n;i++)
    {
        dp[i][i].fi=0;
        dp[i][i].se.fi=matrix[i].fi;
        dp[i][i].se.se=matrix[i].se;
    }
    for (int len=1;len<n;len++)
    {
        for (int l=0;l<n-len;l++)
        {
            int r=l+len;
            //cout << l << r << endl;
            for (int m=l;m<r;m++)
            {
                if (dp[l][r].fi>dp[l][m].fi+dp[m+1][r].fi+dp[l][m].se.fi*dp[l][m].se.se*dp[m+1][r].se.se)
                {
                    //cout << l <<" " << r << ":" ;
                    dp[l][r].fi=dp[l][m].fi+dp[m+1][r].fi+dp[l][m].se.fi*dp[l][m].se.se*dp[m+1][r].se.se;
                    dp[l][r].se.fi=dp[l][m].se.fi;
                    dp[l][r].se.se=dp[m+1][r].se.se;
                    //cout << dp[l][r].fi<< endl;
                }
            }
        }
    }
    cout << dp[0][n-1].fi << endl;
    return 0;
}
