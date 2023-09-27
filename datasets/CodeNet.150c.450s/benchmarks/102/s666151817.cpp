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

vector<string> C;
vector<vector<bool>> used;
int MH, MW;
#define H first
#define W second
bool inside(int h, int w) {
    return 0 <= h && h < MH && 0 <= w && w < MW;
}
bool inside(PII p){return inside(p.H, p.W);}
int dh[] = {-1, 0, 0, 1};
int dw[] = {0, -1, 1, 0};
int dfs(PII now) {
    int res = 1;
    if (used[now.H][now.W]) return 0;
    used[now.H][now.W] = true;
    REP(i, 4) {
        auto buf = MP(now.H + dh[i], now.W + dw[i]);
        if (!inside(buf)) continue;
        if (C[buf.H][buf.W] == '.') res += dfs(buf);
    }
    return res;
}
void solve(int w, int h) {
    MH = h; MW = w;
    C.resize(h);
    used.resize(h, vector<bool>(w, false));
    PII start;
    REP(i, h) {
        cin >> C[i];
        REP(j, w) {
            if (C[i][j] == '@') start = MP(i, j);
        }
    }
    //cout << start.H << " " << start.W << endl;
    cout << dfs(start) << endl;
    used.clear();
    return;
}

int main(void) {
    int n, p, m, w, h;
    string s;
    int a, b, c;
    while (cin >> w >> h) {
        if (w == 0 && h == 0) return 0;
        solve(w, h);
        //return 0;
    }
}