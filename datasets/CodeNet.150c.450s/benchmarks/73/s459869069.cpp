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
#include <functional>
#include <chrono>

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

int sqrtN;
int N, Q;
vector<int> data, backet;

int getSum(int l, int r) {
    int res = 0;
    for (int i = l; i <= r; ++i) {
        if (i % sqrtN == 0 && i + sqrtN <= r) {
            res += backet[i / sqrtN];
            i += sqrtN - 1;
        } else {
            res += data[i];
        }
    }
    return res;
}

void update(int p, int val) {
    data[p] += val;
    backet[p / sqrtN] += val;
}

void debug() {
    cerr << "data = ";
    for (int e : data) cerr << e << " ";cerr << endl;
    cerr << "backet = ";
    for (int e : backet) cerr << e << " ";cerr << endl;
}

int main() {
    scanf("%d%d", &N, &Q);
    sqrtN = sqrt(N);
    data.resize(N, 0);
    backet.resize(sqrtN + 2, 0);
    while (Q--) {
        int c, x, y;
       // debug();
        scanf("%d%d%d", &c, &x, &y);
        if (c) {
            cout << getSum(x - 1, y - 1) << endl;
        } else {
            update(x - 1, y);
        }
    }
}