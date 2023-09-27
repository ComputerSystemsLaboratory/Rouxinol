#include <bits/stdc++.h>
using namespace std;
const int N = 50000;
const int INF = 1e8;
const int M = 20;

int dp[M+1][N+1];
unsigned int cnt;
vector<int> v;

int rec(int m,int n){
    if(dp[m][n] != -1){
        return dp[m][n];
    }

    if(!n){
        return 0;
    }

    if(!m){
        return INF;
    }

    if(v[m-1] > n){
        return dp[m][n] = rec(m-1,n);
    }else{
        return dp[m][n] = min(rec(m-1,n),rec(m,n-v[m-1])+1);
    }
}

/*int main(){
    int n,m;
    cin >> n >> m;

    v.resize(m);

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
}*/

int main(){
    int n,m;
    cin >> n >> m;

    v.resize(m);
    for(auto &t: v){
        cin >> t;
    }

    memset(dp,-1,sizeof(dp));

    cout << rec(m,n) << endl;
}