#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define fi first
#define se second
#define int long long
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18 * 5;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    while(N != 0){
        vector<vector<int> > F(21, vector<int>(21, 0)); 
        REP(i, N){
            int x, y;
            cin >> x >> y;
            F[y][x] = 1;
        }
        int ans = N;

        int nx=10, ny=10;
        int M;
        cin >> M;
        REP(i, M){
            char d;
            int len;
            cin >> d >> len;

            switch(d){
                case 'N':
                FOR(y, ny, ny+len+1){
                    if(F[y][nx] == 1){
                        --ans;
                        F[y][nx] = 0;
                    }
                }
                ny += len;
                break;
                case 'S':
                for(int y=ny; y > ny-len-1; y--){
                    if(F[y][nx] == 1){
                        --ans;
                        F[y][nx] = 0;
                    }
                }
                ny -= len;
                break;
                case 'E':
                FOR(x, nx, nx+len+1){
                    if(F[ny][x] == 1){
                        --ans;
                        F[ny][x] = 0;
                    }
                }
                nx += len;
                break;
                case 'W':
                for(int x=nx; x > nx-len-1; x--){
                    if(F[ny][x] == 1){
                        --ans;
                        F[ny][x] = 0;
                    }
                }
                nx -= len;
                break;
            }
        }
        if(ans == 0) cout << "Yes\n";
        else cout << "No\n";
        cin >> N;
    }
    return 0;
}
