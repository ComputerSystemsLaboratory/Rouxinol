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
    int h, w;
    while(cin >> w >> h, h || w) {
        char board[30][30];
        bool visit[30][30] = {};
        pii st;
        rep(i,0,h) rep(j,0,w) {
            cin >> board[i][j];
            if(board[i][j] == '@') {
                st = pii(i, j);
                visit[i][j] = true;
            }
        }

        int ans = 0;
        queue<pii> q;
        q.push(st);
        while(!q.empty()) {
            pii t = q.front(); q.pop();
            ans++;
            rep(i,0,4) {
                int x = t.fr + dx[i];
                int y = t.sc + dy[i];
                if(x < 0 || x >= h || y < 0 || y >= w) continue;
                if(board[x][y] == '#') continue;
                if(visit[x][y]) continue;
                visit[x][y] = true;
                q.push(pii(x, y));
            }
        }
        cout << ans << endl;
    }
    return 0;
}