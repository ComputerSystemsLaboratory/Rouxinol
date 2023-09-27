#include<bits/stdc++.h>
using namespace std;

const int INF=1000000 ;

int main(){
    int n,m;
    cin >> n >> m;
    int c[m+1];
    for(int i=1;i<=m;i++){
        cin >> c[i];
    }
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=INF;
        }
    }
    dp[0][0]=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(j-c[i]>=0){
                dp[i][j]=min(dp[i-1][j],dp[i][j-c[i]]+1);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}