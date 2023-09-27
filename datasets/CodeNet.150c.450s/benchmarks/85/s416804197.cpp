
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e2+5;

int p[maxn],dp[maxn][maxn],n;

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>p[i-1]>>p[i];
    }
    for(int i=1;i<=n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=(1<<21);
            for(int k=i;k<=j-1;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout<<dp[1][n]<<endl;
    return 0;
}
/*
6
30 35
35 15
15 5
5 10
10 20
20 25
*/

