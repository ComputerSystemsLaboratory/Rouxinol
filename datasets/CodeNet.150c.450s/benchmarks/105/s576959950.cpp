#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using WGraph = vector<vector<pair<int, ll>>>;

template<class T>inline bool chmax(T &a, const T &b) { if (b > a) { a = b; return true; } return false; }
template<class T>inline bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

constexpr int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};
constexpr int INF = 1e9;
constexpr int MOD = 1e9 + 7;
constexpr long long LINF = 1e18;
constexpr double EPS = 1e-10;
constexpr double PI = M_PI;

class XorBase {
    private:
        std::vector<long long> base;
    public:
        XorBase() {}
        void add(long long x) {
            for (long long b : base) {
                if ((x ^ b) < x) {
                    x ^= b;
                }
            }
            if (x != 0) base.push_back(x);
        }
        bool check(long long x) const {
            for (long long b : base) {
                if ((x ^ b) < x) {
                    x ^= b;
                }
            }
            if (x == 0) return true;
            else return false;
        }
};

void solve() {
    int T;
    cin >> T;

    vector<int> res(T);
    for (int i=0; i<T; ++i) {
        int N;
        cin >> N;
        vector<ll> a(N);
        for (int i=0; i<N; ++i) cin >> a[i];
        string s;
        cin >> s;
        XorBase base;
        for (int j=N-1; j>=0; --j) {
            if (s[j] == '0') {
                base.add(a[j]);
            } else {
                if (!base.check(a[j])) {
                    res[i] = 1;
                    break;
                }
            }
        }
    }
    for (int x : res) cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);

    solve();

    return 0;
}
