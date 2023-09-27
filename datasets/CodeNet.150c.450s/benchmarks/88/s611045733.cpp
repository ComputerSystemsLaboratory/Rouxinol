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
    bool comp(const pii& a, const pii& b) {
        int t1 = a.fr * a.fr + a.sc * a.sc;
        int t2 = b.fr * b.fr + b.sc * b.sc;
        return (t1 != t2) ? t1 < t2 : a.fr < b.fr;
    }
}

signed main() {
    int h, w;
    vector<pii> v;
    repq(i,1,150) repq(j,i+1,150) {
        v.pb(pii(i,j));
    }
    sort(v.begin(), v.end(), comp);
    while(cin >> h >> w, h || w) {
        int k = 0;
        rep(i,0,v.size())  {
            if(v[i].fr == h && v[i].sc == w) {
                k = i;
                break;
            }
        }
        printf("%lld %lld\n", v[k+1].fr, v[k+1].sc);
    }
    return 0;
}