// ?????¬???????????¬?????? (define int long long ?????????)

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

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int H, W;
char board[110][110];
bool visited[110][110];

void dfs(int x, int y) {
    rep(k,0,4) {
        int nx = x + dx[k], ny = y + dy[k];
        if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
        if(board[nx][ny] != board[x][y]) continue;
        if(visited[nx][ny]) continue;

        visited[nx][ny] = true;
        dfs(nx, ny);
    }
}

int main() {
    while(cin >> H >> W, H || W) {
        memset(visited, false, sizeof(visited));
        rep(i,0,H) rep(j,0,W) cin >> board[i][j];

        int ans = 0;
        rep(i,0,H) rep(j,0,W) {
            if(visited[i][j]) continue;
            ans++;
            dfs(i, j);
        }
        cout << ans << endl;
    }
    return 0;
}