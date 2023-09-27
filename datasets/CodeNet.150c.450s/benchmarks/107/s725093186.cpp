#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int (i)=0;(i) < (N); (i)++)
#define all(V) V.begin(), V.end()
using i64 = int_fast64_t;
using P = pair<int,int>;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    const int N = s1.size();
    const int M = s2.size();

    vector<vector<i64>> dp(N+1, vector<i64>(M+1, 0));
    rep(i, N+1) dp[i][0] = i;
    rep(i, M+1) dp[0][i] = i;

    for(int i = 1; i <= N; i++ ){
        for(int j = 1; j <= M; j++){
            dp[i][j] = min(min(dp[i-1][j], dp[i][j-1])+1, dp[i-1][j-1] + (s1[i-1] != s2[j-1]));
        }
    }

    cout << dp[N][M] << endl;
}

