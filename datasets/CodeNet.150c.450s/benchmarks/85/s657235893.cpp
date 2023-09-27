#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;scanf("%d",&n);
    vector<pair<int,int>> m(n);
    for(int i=0;i<n;i++)scanf("%d%d",&m[i].first,&m[i].second);
    int dp[n][n];
    fill(dp[0],dp[0]+n*n,1e9);
    for(int i=0;i<n;i++)dp[i][i]=0;
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            int j=i+k;
            for(int l=i;l<j;l++){
                dp[i][j]=min(dp[i][j],dp[i][l]+dp[l+1][j]+m[i].first*m[l].second*m[j].second);
            }
        }
    }
    printf("%d\n",dp[0][n-1]);
    return 0;
}
