#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[101][101];
ll n,m;
ll g[101][101];

int main()
{
    for(ll i=0;i<101;i++)
        for(ll j=0;j<101;j++)
            if(i!=j)
                dp[i][j]=1e15;

    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        g[x][y]=w;
        dp[x][y]=w;
    }

    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);

    bool nc=0;
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(dp[i][k]+dp[k][j]<dp[i][j])
            {
                nc=1;
                break;
            }
    if(nc)
        cout<<"NEGATIVE CYCLE\n";
    else
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(dp[i][j]>=1e13)
                cout<<"INF";
            else
                cout<<dp[i][j];
            if(j==n-1)
                cout<<endl;
            else
                cout<<" ";
    }
}