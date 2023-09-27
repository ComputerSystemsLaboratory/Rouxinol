#include <iostream>
using namespace std;

int N, W;
int v[101];
int w[101];
int dp[101][10001];

int rec(int i, int j){
    if(i < 0 || j < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    int ret = 0;
    if(j >= w[i]) ret = max(rec(i-1, j), rec(i-1, j-w[i]) + v[i]);
    else ret = rec(i-1, j);
    
    return dp[i][j] = ret;
}

int main(void){
    // Your code here!
    cin >> N >> W;
    
    for(int i = 0; i < N; i++) cin >> v[i] >> w[i];
    for(int i = 0; i <= 100; i++) for(int j = 0; j <= 10000; j++) dp[i][j] = -1;
    cout << rec(N-1, W) << endl;
}

