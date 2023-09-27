#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

ll dp[105][105];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N;
    cin >> N;
    vector<pll> A(N);
    REP(i, N) {
        cin >> A[i].first >> A[i].second;
    }

    REP(i, N + 1) {
        REP(j, N + 1) {
            dp[i][j] = INF;
        }
        dp[i][i] = 0;
    }

    FOR(len, N, 1) {
        REP(left, N) {
            if (left + len >= N)
                break;
            REP(i, len) {
                ll mul = dp[left][left + i] + dp[left + i + 1][left + len];
                mul += A[left].first * A[left + i].second * A[left + len].second;
                dp[left][left + len] = std::min(dp[left][left + len], mul);
            }
        }
    }

    cout << dp[0][N - 1] << endl;
    return 0;
}
