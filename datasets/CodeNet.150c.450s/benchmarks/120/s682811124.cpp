#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16>>(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF = 1e9;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

int main()
{
    ios::sync_with_stdio(false);

    int R, C;
    while (cin >> R >> C, R || C) {
        vector<vector<int>> grid(R, vector<int>(C));
        rep(r, R) rep(c, C) cin >> grid[r][c];

        int ans = 0;
        for (int i=0; i<(1<<R); i++) {
            // cerr << "i = " << BINARY(i) << endl;

            vector<vector<int>> tgrid = grid;
            vector<int> num(C);

            rep(r, R) {
                if (i>>r & 1) {
                    // ?£???????
                    rep(c, C) {
                        tgrid[r][c] = 1 - tgrid[r][c];
                    }
                }
                rep(c, C) num[c] += tgrid[r][c];
            }

            int tmp = 0;
            rep(c, C) {
                tmp += max(num[c], R - num[c]);
            }
            ans = max(ans, tmp);

            // cerr << tmp << endl;
        }
        
        cout << ans << endl;
    }
}