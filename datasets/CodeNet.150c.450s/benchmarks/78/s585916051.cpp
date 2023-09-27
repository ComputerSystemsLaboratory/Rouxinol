#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define RFOR(i, a, b) for (int i = (int)(b - 1); i >= (int)(a); --i)
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x) * (x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define MAX_N 181
#define INF 100000000

int r[MAX_N];

int main() {
    r[0] = 0;
    r[1] = 1;
    int j = 3;
    FOR(i, 2, MAX_N) {
        r[i] = r[i-1] + j;
        j += i+1;
    }

    int n;
    while (cin >> n, n) {
        vvi dp(2, vi(n+1, INF));
        FOR(i, 1, MAX_N) {
            if (r[i] <= n) {
                dp[0][r[i]] = 1;
            } else {
                break;
            }
        }
        while (dp[0][n] == INF) {
            FOR(i, 1, n+1) {
                if (dp[0][i] != INF) {
                    REP(j, MAX_N) {
                        if (i + r[j] <= n) {
                            dp[1][i+r[j]] = min(dp[0][i+r[j]], dp[0][i] + 1);
                        }
                    }
                }
            }
            dp[0] = dp[1];
        }
        cout << dp[0][n] << " ";

        fill(ALL(dp[0]), INF);
        fill(ALL(dp[1]), INF);
        FOR(i, 1, MAX_N) {
            if (r[i] <= n) {
                if (r[i] % 2 == 1) dp[0][r[i]] = 1;
            } else {
                break;
            }
        }
        while (dp[0][n] == INF) {
            FOR(i, 1, n+1) {
                if (dp[0][i] != INF) {
                    REP(j, MAX_N) {
                        if (r[j] % 2 == 1 && i + r[j] <= n) {
                            dp[1][i+r[j]] = min(dp[0][i+r[j]], dp[0][i] + 1);
                        }
                    }
                }
            }
            dp[0] = dp[1];
        }
        cout << dp[0][n] << endl;
    }
}