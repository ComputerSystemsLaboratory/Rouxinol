#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// data
const int MAX_N = 100;
int A[MAX_N][2]; // 0-col, 1-row
enum
{
    row, col
};

// dp
int dp[MAX_N+1][MAX_N]; // k number from A_i;
const int INF = 1 << 29;

int main(){
    int n; cin >> n;
    rep(i, n){
        cin >> A[i][row] >> A[i][col];
    }

    rep(k, n+1){
        rep(i, n){
            if (k <= 1)
                dp[k][i] = 0;
            else    
                dp[k][i] = INF;
        }
    }

    rep(k, n+1){
        rep(i, n){
            rep(j, k)
                dp[k][i] = min(dp[k][i], 
                    dp[j][i] + dp[k-j][i+j] + A[i][row]*A[i+j][row]*A[i+k-1][col]);
        }
    }

    cout << dp[n][0] << endl;

}
