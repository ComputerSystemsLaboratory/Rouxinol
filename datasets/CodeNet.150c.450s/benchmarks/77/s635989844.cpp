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

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
int const MOD = 1000000007;

namespace std {
    bool operator<(const P& a, const P& b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

signed main() {
    int n;
    while(scanf("%lld", &n)) {
        if(n == 0) break;
        int board[30][30] = {};
        int r, c;
        rep(i,0,n) {
            scanf("%lld%lld", &c, &r);
            r = 20 - r;
            board[r][c] = 1;
        }

        int m; scanf("%lld", &m);
        string st = "SNEW";
        char d; int t;
        int rr = 10, cc = 10;
        int cnt = 0;
        rep(i,0,m) {
            scanf(" %c %lld", &d, &t);
            // printf("debug: m = %lld, input = (%c, %lld)\n", m, d, t);
            int p = st.find(d);
            rep(j,0,t) {
                rr += dx[p], cc += dy[p];
                if(board[rr][cc]) cnt++;
                board[rr][cc] = 0;
            }
        }
        if(cnt == n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}