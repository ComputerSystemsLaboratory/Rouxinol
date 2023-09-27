#include "bits/stdc++.h"

using namespace std;

using ll = long long;

template<typename T> using V = std::vector<T>;
using Vi = V<int>;
using VVi = V<V<int>>;
using Vl = V<ll>;
using VVl = V<V<ll>>;
using Vs = V<string>;

template<typename T1, typename T2> using P = std::pair<T1, T2>;
using Pii = P<int, int>;
using Pll = P<ll, ll>;
using Pdd = P<double, double>;

template<typename T1, typename T2> using M = std::map<T1, T2>;
using Mii = M<int, int>;
using Msi = M<string, int>;

#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define REP2(i,s,e) for(int i=(int)(s);i<(int)(e);++i)
#define RREP(i,s,e) for(int i=(int)(s);i>=(int)(e);--i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin(),ie=(c).end();i!=ie;++i)
#define ALL(c) (c).begin(), (c).end()

const double PI = acos(-1);
const ll MOD = 1e9+7;

int n;
// string s;
VVi v;

void fall(int depth, int start, int end) {
    RREP(i, depth, 0) {
        if (i != 0) {
            REP2(j, start, end+1) {
                v[i][j] = v[i-1][j];
            }
        } else {
            REP2(j, start, end+1) {
                v[i][j] = -1;
            }
        }
    }
}

int getScore(int depth, int start, int end) {
    int x = v[depth][start];
    if (x == -1) return 0;
    if (end - start + 1 < 3) return 0;
    fall(depth, start, end);
    return x * (end - start + 1);
}

int main() {
    while (true) {
        cin >> n;
        if (n == 0) break;

        v = VVi(n, Vi(5));
        REP(i, n) REP(j, 5) cin >> v[i][j];
        int result = 0;

        while (true) {
            bool f = false;
            REP(i, n) {
                Vi u = v[i];
                int x = u[0], start = 0;
                REP2(j, 1, 5) {
                    if (u[j] != x) {
                        int score = getScore(i, start, j-1);
                        if (score > 0) f = true;
                        result += score;
                        x = u[j]; start = j;
                    }
                }
                int score = getScore(i, start, 4);
                if (score > 0) f = true;
                result += score;
            }
            if (!f) break;
        }
        std::cout << result << '\n';
    }

    return 0;
}

