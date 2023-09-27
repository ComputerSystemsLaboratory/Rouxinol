#include <iostream>
#include<cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
ll dp[105][105];
const ll INF = 0x3f3f3f3f;
int main()
{
    int n,i,m,j,a,b,k;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        for(j = 0;j < n;j++)
            dp[i][j] = INF;
    dp[0][0] = 0;
    for(j = 0;j < n;j++)
    {
        cin >> i >> m;
        while(m--)
        {
            cin >> a ;
            cin >> dp[i][a];
        }
    }
    for(k = 0;k < n;k++)
        for(i = 0;i < n;i++)
            for(j = 0;j < n;j++)
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
    for(i = 0;i < n;i++)
        cout << i << ' ' << dp[0][i] << endl;
    return 0;
}

