#include <bits/stdc++.h>
using namespace std;
using ll         = long long;
constexpr ll MOD = 1000000007;
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define REP2(i, x, n) for (ll i = x; i < (n); i++)
#define PR(x) cout << (x) << "\n"
#define PS(x) cout << (x) << " "
const long long INF = numeric_limits<long long>::max();
int main() {
    ll N;
    cin >> N;

    vector<ll> anss(N + 1, 0);

    bool isBreak = false;
    ll MAX       = 105;
    REP2(i, 1, MAX) {
        REP2(j, 1, MAX) {
            REP2(k, 1, MAX) {
                ll ans = i * i + j * j + k * k + i * j + j * k + i * k;
                if (ans <= N) {
                    anss[ans]++;
                }
            }
        }
    }

    REP2(i, 1, anss.size()) {
        PR(anss[i]);
    }

    return 0;
}