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

signed main() {
    int n, m;
    while(cin >> n >> m) {
        if(!n && !m) break;
        vector<int> v1(n), v2(m);
        int sum1 = 0, sum2 = 0;
        rep(i,0,n) {
            cin >> v1[i];
            sum1 += v1[i];
        }
        rep(i,0,m) {
            cin >> v2[i];
            sum2 += v2[i];
        }

        int s = INF;
        pii ans;
        rep(i,0,n) {
            rep(j,0,m) {
                int t1 = sum1 - v1[i] + v2[j];
                int t2 = sum2 - v2[j] + v1[i];
                if(t1 == t2 && v1[i] + v2[j] < s){
                    s = v1[i] + v2[j];
                    ans = pii(v1[i], v2[j]);
                }
            }
        }
        if(s == INF) cout << -1 << endl;
        else printf("%lld %lld\n", ans.fr, ans.sc);
    }
    return 0;
}