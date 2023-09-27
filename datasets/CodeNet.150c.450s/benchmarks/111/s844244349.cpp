#include <bits/stdc++.h>
using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;
long long dp[101][21];

int main()
{
    int N;
    cin >> N;

    vector<int> num(N);
    rep(i, N) cin >> num[i];

    dp[1][num[0]] = 1;

    rep(i, N-1) {
        rep(j, 21) {
            if (dp[i][j] > 0) {
                int plus = j + num[i];
                int minus = j - num[i];

                if (plus >= 0 && plus <= 20) dp[i+1][plus] += dp[i][j];
                if (minus >= 0 && minus <= 20) dp[i+1][minus] += dp[i][j];
            }
        }
    }

    cout << dp[N-1][num[N-1]] << endl;
    return 0;
}
