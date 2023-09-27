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
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int W, H;
int board[100][100];
bool used[100][100];

void fillboard(int x, int y) {
    if(x < 0 || x >= H || y < 0 || y >= W) return;
    if(used[x][y]) return;
    if(board[x][y] == 0) return;
    // printf("x = %lld, y = %lld\n", x, y);
    used[x][y] = true;
    rep(i,0,8) fillboard(x + dx[i], y + dy[i]);
}

signed main() {
    while(cin >> W >> H, W || H) {
        memset(used, false, sizeof(used));
        rep(i,0,H) rep(j,0,W) cin >> board[i][j];

        int ans = 0;
        rep(i,0,H) rep(j,0,W) {
            if(used[i][j] || board[i][j] == 0) continue;
            ans++;
            fillboard(i, j);
        }
        cout << ans << endl;
    }
    return 0;
}