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

int translate(string s) {
    int res = 0;
    int num = 1;
    REP(i, s.size()) {
        if (s[i] == 'm') {
            res += num * 1000;
        }
        if (s[i] == 'c') {
            res += num * 100;
        }
        if (s[i] == 'x') {
            res += num * 10;
        }
        if (s[i] == 'i') {
            res += num * 1;
        }
        num = 1;
        if ('0' <= s[i] && s[i] <= '9') {
            num = s[i] - '0';
        }
    }
    return res;
}

string translate(int n) {
    string res = "";
    string keta = "mcxi";
    for (int i = 0; i < 4; i++) {
        int c = n / pow(10, 3 - i);
        c %= 10;
        if (c > 1) {
            res.push_back(c + '0');
            res.push_back(keta[i]);
        } else if (c == 1) {
            res.push_back(keta[i]);
        }
    }
    return res;
}

void solve(string s1, string s2) {
    //cerr << translate(s1) << " " << translate(s2) << endl;
    cout << translate(translate(s1) + translate(s2)) << endl;
    return;
}

signed main(void) {
    int n, p, m, w, h;
    string s, s1, s2;
    int a, b, c, d;
    while (cin >> n) {
        REP(i, n) cin >> s1 >> s2, solve(s1, s2);
        return 0;
    }
}