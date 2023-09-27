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

const int INF = 1e9;
const int MOD = INF + 7;
const LL LLINF = 1e18;

void solve(int N) {
    VVI mas(N, VI(5));
    REP(i, N)REP(j, 5) {
        scanf("%d", &mas[i][j]);
    }
    int ans = 0;
    while (true) {
        bool Flag = false;
        REP(i, N)REP(j, 3) {
            int def = mas[i][j];
            if (def == 0) continue;
            int renzoku = 0;
            bool f = false;
            for (int k = j + 1; k < 5; k++) {
                if (def != mas[i][k]) {
                    renzoku = k - j;
                    break;
                }
                if (k == 4) f=true; 
            }
            if (f) renzoku = 5 - j;
            if (renzoku >= 3) {
                Flag = true;
                ans += def * renzoku;
                for (int k = j; k < j + renzoku; k++) {
                    mas[i][k] = 0;
                }
            }
        }
        if (!Flag) break;
        REP(_, N + 10) {
            FOR(i, 1, N) {
                REP(j, 5) {
                    if (mas[i][j] == 0) {
                        mas[i][j] = mas[i - 1][j];
                        mas[i - 1][j] = 0;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return;
}

signed main(void) {
    LL n, m, p, a, b, c, x, y, z, q;
    string s;
    bool f = false;
    while (cin >> n, n) {
        solve(n);
        //return 0;
    }
}