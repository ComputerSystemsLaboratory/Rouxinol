#include <bits/stdc++.h>
using namespace std;
const int N = 50000;
const int INF = 1e8;
const int M = 20;

/*int rec(int n,int m){
    if(dp[n][m] != INF){
        return dp[n][m];
    }

    if(v[m] > n){
        return dp[n][m] = rec(n,m-1);
    }else{
        return dp[n][m] = min(rec(n,m),rec(n-n/v[m]*v[m],m-1));
    }
}*/

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> v(m);
    int dp[M+1][N+1];

    for(auto &t: v){
        cin >> t;
    }

    for(int i=0;i<=M;i++){
        for(int j=0;j<=N;j++){
            dp[i][j]=(j==0?0:INF);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<=n; j++){
            if(j < v[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = min(dp[i][j],dp[i+1][j-v[i]]+1);
            }
        }
    }

    cout << dp[m][n] << endl;

}