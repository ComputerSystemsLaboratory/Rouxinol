#include <bits/stdc++.h>

#define rep(i, a, n) for(int i = (a);i < (n);i++)
#define REP(i, n)    rep(i, 0, n)
#define all(e)       (e).begin(), (e).end()

#ifdef LOCAL
#define show(x) cerr<<__LINE__<<" : "<<#x<<" = "<<(x)<<endl
#else
#define show(x) true
#endif

using namespace std;
using ll=long long;
template<class T> using V=vector<T>;

template<class T, class U>
void chmin(T &t, const U u) { if (t > u) t = u; }

template<class T, class U>
void chmax(T &t, const U u) { if (t < u) t = u; }

const int INF = (1 << 30) - 1;
const ll INFL = (ll) 5e15;
const int MOD = 1e9 + 7;

class Solver {
public:
    bool solve() {
        cin >> N >> M;
        if (N == 0) return false;
        R.resize(N);
        REP(i, N) {
            int x, y;
            cin >> R[i].second >> R[i].first;
        }
        sort(R.rbegin(), R.rend());
        for (auto e:R) {
            if (e.second <= M) {
                M -= e.second;
            } else {
                ans += e.first * (e.second - M);
                M = 0;
            }
        }

        cout << ans << endl;

        return true;
    }

private:
    int N, M;
    V<pair<int, int>> R;
    int ans = 0;
};

int main() {
    while (Solver().solve());

    return 0;
}

