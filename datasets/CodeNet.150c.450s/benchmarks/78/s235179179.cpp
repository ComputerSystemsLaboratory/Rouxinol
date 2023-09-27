#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <bitset>
#include <ctime>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cassert>
#include <cstddef>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <sstream>
#include <fstream>

using namespace std;
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define RREP(i, a) for(int (i) = (a) - 1; (i) >= 0; (i)--)
#define FORR(i, a, b) for(int (i) = (a) - 1; (i) >= (b); (i)--)
#define DEBUG(C) cerr << #C << " = " << C << endl;
using LL = long long;
using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<LL>;
using VVL = vector<VL>;
using VD = vector<double>;
using VVD = vector<VD>;
using PII = pair<int, int>;
using PDD = pair<double, double>;
using PLL = pair<LL, LL>;
using VPII = vector<PII>;
template<typename T> using VT = vector<T>;
#define ALL(a) begin((a)), end((a))
#define RALL(a) rbegin((a)), rend((a))
#define SORT(a) sort(ALL((a)))
#define RSORT(a) sort(RALL((a)))
#define REVERSE(a) reverse(ALL((a)))
#define MP make_pair
#define FORE(a, b) for (auto &&a : (b))
#define FIND(s, e) ((s).find(e) != (s).end())
#define EB emplace_back
template<typename T> inline bool chmax(T &a, T b){if (a < b){a = b;return true;}return false;}
template<typename T> inline bool chmin(T &a, T b){if (a > b){a = b;return true;}return false;}

const int INF = 1e9;
const int MOD = INF + 7;
const LL LLINF = 1e18;
const double EPS = 1e-9;

const int MAX_N = 512;
const int MAX = 1e6 + 10;
int sum[MAX_N];
int dp[MAX];
int odddp[MAX];

void init() {
    for (int i = 1; i < MAX_N; i++) {
        sum[i] = i * (i + 1) * (i + 2) / 6;
    }
    for (int i = 1; i < MAX; i++) {
        dp[i] = odddp[i] = i;
    }
    for (int i = 1; i < MAX_N; i++) {
        for (int j = 0; j + sum[i] < MAX; j++) {
            chmin(dp[j + sum[i]], dp[j] + 1);
            if (chmin(odddp[j + sum[i]], (sum[i] % 2 % 2 ? odddp[j] + 1 : INF))) {
                //if (j + sum[i] <= 40) {DEBUG(j)DEBUG(sum[i])DEBUG(j + sum[i])puts("");}
            }
        }
    }
}

void solve(int n) {
    cout << dp[n] << " " << odddp[n] << endl;
}

signed main(void) {
    LL n, m, p, a, b, c, x, y, z, q;
    string s;
    bool f = false;
    init();
    while (cin >> n, n) {
        solve(n);
        //return 0;
    }
}