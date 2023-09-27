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

void solve(string s) {
    set<string> se;
    REP(i, s.size() - 1) {
        string sbufa = s.substr(0, i + 1);
        string sbufb = s.substr(i + 1);
        string sbufar = sbufa; REVERSE(sbufar);
        string sbufbr = sbufb; REVERSE(sbufbr);
        se.insert(sbufa + sbufb);
        se.insert(sbufa + sbufbr);
        se.insert(sbufar + sbufbr);
        se.insert(sbufar + sbufb);
        se.insert(sbufb + sbufa);
        se.insert(sbufb + sbufar);
        se.insert(sbufbr + sbufa);
        se.insert(sbufbr + sbufar);
    }
    //FORE(el, se) cout << el << endl;
    cout << se.size() << endl;
    return;
}

signed main(void) {
    int n, p, m, w, h;
    string s;
    int a, b, c, d;
    while (cin >> n) {
        REP(i, n) cin >> s, solve(s);
        return 0;
    }
}