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

void solve(int N) {
    VPII nd(N);
    nd[0] = MP(210, 210);
    FOR(i, 1, N) {
        int n, d;
        cin >> n >> d;
        int x, y;
        tie(x, y) = nd[n];
        if (d == 0) {
            x--;
        } else if (d == 1) {
            y--;
        } else if (d == 2) {
            x++;
        } else {
            y++;
        }
        nd[i] = MP(x, y);
    }
    int xmax = 0, ymax = 0;
    int xmin = INF, ymin = INF;
    FORE(el, nd) {
        xmax = max(xmax, el.first);
        xmin = min(xmin, el.first);
        ymax = max(ymax, el.second);
        ymin = min(ymin, el.second);
    }
    cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
    return;
}

int main(void) {
    int n, p, m, w, h;
    string s;
    int a, b, c;
    while (cin >> n) {
        if (n == 0) return 0;
        solve(n);
        //return 0;
    }
}