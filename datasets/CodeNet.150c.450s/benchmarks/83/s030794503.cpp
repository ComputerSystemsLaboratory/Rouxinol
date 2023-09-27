#include <bits/stdc++.h>
using namespace std;
const int N = 100;
const int W = 10000;

int dp[N+1][W+1];
vector<int> v,w;

int rec(int n,int m){
    if(dp[n][m] != -1){
        return dp[n][m];
    }

    if(n == v.size()){
        return 0;
    }

    if(m < w[n]){
        return dp[n][m] = rec(n+1,m);
    }else{
        return dp[n][m] = max(rec(n+1,m),rec(n+1,m-w[n])+v[n]);
    }
}

/* int main(){
    int n,m;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        int s,t;
        cin >> s >> t;
        v.push_back(s);
        w.push_back(t);
    }

    for(int i=0; i<=m; i++){
        dp[0][i] = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            if(j < w[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j],dp[i][j-w[i]]+v[i]);
            }
        }
    }

    cout << dp[n][m] << endl;
} */

int main(){
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int s,t;
        cin >> s >> t;
        v.push_back(s);
        w.push_back(t);
    }

    memset(dp,-1,sizeof(dp));

    cout << rec(0,m) << endl;
}