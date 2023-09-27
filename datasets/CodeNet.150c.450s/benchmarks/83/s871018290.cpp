#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<n;i++)
#define repn(i,n,m) for(int i=n;i<m;i++)
#define repn1(i,n,m) for(int i=n;i<=m;i++)
#define pb push_back
using namespace std;
typedef long long ll;
const int INF = 1e+8;

int main(){

    int N, W;
    int v[1001];
    int w[1001];
    int dp[101][10001];
    cin >> N >> W;
    memset(dp, 0, sizeof(dp));
    rep(i, N)cin >> v[i] >> w[i];
    rep(i,N){
        rep(j,W+1){
            if(j < w[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[N][W] << endl;
 
    return 0;	
}