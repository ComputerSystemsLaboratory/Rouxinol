// テ・ツ淞コテヲツ慊ャテ」ツδ?」ツδウテ」ツδ療」ツδャテ」ツδシテ」ツδ?(テァツクツョテ・ツーツ湘ァツ可?

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
typedef pair<int, int> pii;
typedef long long ll;
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

int W, H;
int board[60][60];
bool used[60][60];

signed main() {
    while(cin >> W >> H, W || H) {
        memset(used, false, sizeof(used));
        rep(i,0,H) rep(j,0,W) cin >> board[i][j];

        int ans = 0;
        rep(i,0,H) rep(j,0,W) {
            if(used[i][j] || board[i][j] == 0) continue;
            ans++; used[i][j] = true;

            queue<pii> q;
            q.push(pii(i, j));

            while(!q.empty()) {
                pii t = q.front(); q.pop();
                int x = t.first, y = t.second;
                rep(k,0,8) {
                    int nx = x + dx[k], ny = y + dy[k];
                    if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
                    if(used[nx][ny] || board[nx][ny] == 0) continue;
                    used[nx][ny] = true;
                    q.push(pii(nx, ny));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}