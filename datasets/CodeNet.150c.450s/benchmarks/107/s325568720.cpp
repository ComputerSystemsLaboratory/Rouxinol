#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];
const int INF = 500010;

int main() {
    string s, t; cin >> s >> t;
    int N = s.length(), M = t.length();

    for(int i=0; i<=N; i++) dp[i][0] = i;
    for(int j=0; j<=M; j++) dp[0][j] = j;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int cost = (s[i] != t[j]);
            dp[i+1][j+1] = min({dp[i][j+1]+1, dp[i+1][j]+1, dp[i][j]+cost});
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}