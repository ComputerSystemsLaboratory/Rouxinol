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
#define ALL(a) begin((a)), end((a))
#define RALL(a) rbegin((a)), rend((a))
#define SORT(a) sort(ALL((a)))
#define RSORT(a) sort(RALL((a)))
#define REVERSE(a) reverse(ALL((a)))
#define MP make_pair
#define FORE(a, b) for (auto &&a : (b))
#define FIND(s, e) ((s).find(e) != (s).end())
#define EB emplace_back

const int INF = 1e9;
const int MOD = INF + 7;
const LL LLINF = 1e18;

void solve(int n, int m) {
    VI a(n), b(m);
    REP(i, n) cin >> a[i];
    REP(i, m) cin >> b[i];
    SORT(a); SORT(b);
    int asum = accumulate(ALL(a), 0);
    int bsum = accumulate(ALL(b), 0);
    vector<tuple<int, int, int>> v;
    REP(i, n) REP(j, m) {
        int ab = asum, bb = bsum;
        if (ab - a[i] + b[j] == bb - b[j] + a[i]) {
            v.EB(make_tuple(a[i] + b[j], a[i], b[j]));
        }
    }
    SORT(v);
    int i, j, k;
    if (v.size() == 0) {
        cout << -1 << endl;
        return;
    }
    tie(i, j, k) = v.front();
    cout << j << " " << k << endl;
    return;
}

int main(void) {
    int n, p, m;
    string s;
    int a, b, c;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) return 0;
        solve(n, m);
        //return 0;
    }
}