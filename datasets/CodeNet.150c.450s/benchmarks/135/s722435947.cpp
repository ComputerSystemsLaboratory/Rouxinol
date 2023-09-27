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

void init() {
    
}
const int MAX = 1510;
int h[MAX], w[MAX];
int hcnt[MAX * 1000], wcnt[MAX * 1000];
void solve(int n, int m) {
    memset(hcnt, 0, sizeof(hcnt));
    memset(wcnt, 0, sizeof(wcnt));
    for (int i = 0; i < n; i++) {
        scanf("%d", h + i);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", w + i);
    }
    for (int i = 0; i < n; i++) {
        int sum = h[i];
        hcnt[sum]++;
        for (int j = i + 1; j < n; j++) {
            sum += h[j];
            hcnt[sum]++;
        }
    }
    for (int i = 0; i < m; i++) {
        int sum = w[i];
        wcnt[sum]++;
        for (int j = i + 1; j < m; j++) {
            sum += w[j];
            wcnt[sum]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < MAX * 1000; i++) {
        ans += hcnt[i] * wcnt[i];
    }
    printf("%d\n", ans);
}

signed main(void) {
    LL n, m, p, a, b, c, x, y, z, q;
    string s;
    bool f = false;
    init();
    while (cin >> n >> m, n) {
        solve(n, m);
        //return 0;
    }
}