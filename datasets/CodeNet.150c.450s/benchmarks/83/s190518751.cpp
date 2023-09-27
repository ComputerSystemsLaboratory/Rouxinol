#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[110][10010];
int main(void){
    int n,W,i,j,k;
    cin >> n >> W;
    vector<int> v(n+1,0),w(n+1,0);
    for(i=1;i<=n;i++){
        cin >> v[i] >> w[i];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=W;j++){
            if(j-w[i]>=0)dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    int ret=0;
    for(i=0;i<=W;i++)ret=max(dp[n][i],ret);
    cout << ret << endl;
}

