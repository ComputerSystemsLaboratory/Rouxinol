#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <climits>
#include <ctime>
#include <cassert>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define all(v) begin(v), end(v)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 2000000000
#define int long long int

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define LEQ(n, m) ((n) <= (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))
#define GEQ(n, m) ((n) + EPS >= (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int const MOD = 1000000007;

namespace std {
    bool operator<(const P& a, const P& b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

string fix(int n, int l) {
    string ret = to_string(n);
    rep(i,ret.length(),l) {
        ret = '0' + ret;
    }
    return ret;
}

signed main() {
    int n, l;
    while(cin >> n >> l, n || l) {
        vector<int> v; v.pb(n);
        while(1) {
            string s = fix(n, l);
            int a[7];
            rep(i,0,s.length()) a[i] = s[i] - '0';
            sort(a, a+s.length());
            int ma = 0, mi = 0;
            int d = 1;
            rep(i,0,s.length()) {
                ma += a[i] * d;
                mi += a[s.length() - i - 1] * d;
                d *= 10;
            }
            // printf("ma: %lld, mi: %lld\n", ma, mi);

            bool ok = false;
            rep(i,0,v.size()) {
                if(v[i] == ma - mi) {
                    printf("%lld %lld %lld\n", i, ma-mi, v.size()-i);
                    ok = true;
                    break;
                }
            }
            if(ok) break;
            v.pb(ma - mi);
            n = ma - mi;
        }
    }
    return 0;
}