#ifdef DEBUG
#include "../utils.cpp"
#endif
#include <bits/stdc++.h>
/*
Problem


Category
DP
 
URL:


考察:



Date: 2020/06/01
*/
 

using namespace std;
using ll = int64_t;
#define int int64_t
#define INF 10e9

 
/* ==== declarations ====== */
// functions
void solve();
void getInput();
 
// global variables
int N;
vector<int> L, R;
vector<vector<int>> dp;

/* ======================== */


void getInput() {
    cin>>N;
    L = vector<int>(N, 0);
    R = vector<int>(N, 0);
    dp = vector<vector<int>>(N, vector<int>(N, 1e9));
    
    for(int i=0; i<N; ++i) {
        cin>>L[i]>>R[i];
    }
}
 

void solve() {
    
    for(int i=0; i<N; ++i) {
        dp[i][i] = 0;
    }
    for(int i=0; i+1<N; ++i) {
        dp[i][i+1] = L[i]*R[i]*R[i+1];
    }

    for(int i=2; i<N; ++i) {
        for(int j=0; i+j < N; ++j) {
            for(int k = 0; k<i; ++k) {
                int p = L[j];
                int q = R[j+k];
                int r = R[j+i];
                dp[j][j+i] = min(dp[j][j+i], p*q*r + dp[j][j+k] + dp[j+k+1][j+i]);

            }
        }
    }
    cout<<dp[0][N-1]<<endl;
}
 
 
signed main(){
    
    getInput();
    solve();
    
    return 0;
}


