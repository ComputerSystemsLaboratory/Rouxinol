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

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};


const int INF = 1 << 25;

int H, W, N;
char board[1010][1010];
int dist[1010][1010];
int x[10], y[10];

int bfs(int sx, int sy, int tx, int ty) {
    rep(i,0,H) rep(j,0,W) dist[i][j] = INF;
    dist[sx][sy] = 0;

    queue<pii> que;
    que.push(make_pair(sx, sy));

    while(que.size()) {
        pii cur = que.front(); que.pop();
        int cx, cy;
        tie(cx, cy) = cur;

        rep(k,0,4) {
            int nx = cx + dx[k], ny = cy + dy[k];
            if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if(board[nx][ny] == 'X') continue;
            if(dist[nx][ny] > dist[cx][cy] + 1) {
                dist[nx][ny] = dist[cx][cy] + 1;
                que.push(make_pair(nx, ny));
            }
        }
    }

    return dist[tx][ty];
}

int main() {
    cin >> H >> W >> N;
    rep(i,0,H) rep(j,0,W) {
        cin >> board[i][j];
        if(board[i][j] == 'S') board[i][j] = '0';
        if(isdigit(board[i][j])) {
            int val = board[i][j] - '0';
            x[val] = i, y[val] = j;
        }
    }

    int ans = 0;
    rep(i,0,N) {
        ans += bfs(x[i], y[i], x[i+1], y[i+1]);
    }
    cout << ans << endl;
    return 0;
}