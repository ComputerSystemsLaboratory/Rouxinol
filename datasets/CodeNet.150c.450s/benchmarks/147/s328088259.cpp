#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define int ll

template<typename T1,typename T2> inline void chmin(T1 &a, T2 b){ if(a > b) a = b; }
template<typename T1,typename T2> inline void chmax(T1 &a, T2 b){ if(a < b) a = b; }

#define REP(i,n) for(int i=0;i<n;++i)
#define SORT(name) sort(name.begin(), name.end())
#define ZERO(p) memset(p, 0, sizeof(p))
#define MINUS(p) memset(p, -1, sizeof(p))
#if 1
#  define DBG(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#  define DBG(fmt, ...)
#endif

const ll LLINF = (1LL<<60);
const int INF = (1LL<<30);
const double DINF = std::numeric_limits<double>::infinity();
const int MOD = 1000000007;
const int MAX_N = 100010;

int N;

signed main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;

    vector<int> ans(10010, 0);
    for(int x = 1; x <= 100; ++x) {
        for (int y = 1; y <= 100; ++y) {
            for (int z = 1; z <= 100; ++z) {
                int n = x * x + y * y + z * z + x * y + y * z + z * x;
                if(n <= 10000) {
                    ans[n]++;
                }
            }
        }
    }

    for(int i = 1; i <= N; ++i) {
        printf("%lld\n", ans[i]);
    }

    return 0;
}

