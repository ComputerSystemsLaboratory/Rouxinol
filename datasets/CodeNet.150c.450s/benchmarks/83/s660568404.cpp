#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX_N = 100;
const int MAX_W = 10000;

int dp[MAX_N+1][MAX_W+1];

int n, W;
int w[MAX_N], v[MAX_N];

int rec(int i, int j){
    // すでに調べたことがある場合
    if(dp[i][j] >= 0){
        return dp[i][j];
    }
    int res;
    // すべての品物を使った場合
    if(i==n){
        res = 0;
    }
    // その品物が入らない場合
    else if(j < w[i]){
        res = rec(i+1,j);
    }
    // その品物が入る場合
    else {
        // その品物を使う場合と使わない場合で大きい方を求める
        res = max(rec(i+1,j), rec(i+1, j-w[i])+v[i]);
    }
    // 結果をテーブルに記憶する
    return dp[i][j] = res;
}

int main() {
    cin >> n >> W;
    for(int i=0; i<n; i++) cin >> v[i] >> w[i];
    memset(dp, -1, sizeof(dp));
    cout << rec(0,W) << endl;
}

