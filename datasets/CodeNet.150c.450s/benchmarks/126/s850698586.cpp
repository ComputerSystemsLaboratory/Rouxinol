#include<bits/stdc++.h>
using namespace std;
int dp[20][20],x,y,n,ans,a,b;

int main(){

    while(1){
    cin >> x >> y;
    if(x==0&&y==0)break;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a >> b;
        dp[a][b]=-1;
    }
    dp[1][1]=1;

    for(int i=1;i<=y;i++){
        for(int j=1;j<=x;j++){
            if(dp[j][i]==0){
                if(dp[j][i-1]!=-1)dp[j][i]+=dp[j][i-1];
                if(dp[j-1][i]!=-1)dp[j][i]+=dp[j-1][i];
            }
        }
    }

    cout << dp[x][y] << endl;
    fill(dp[0],dp[19],0);
    }

return 0;
}