#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

typedef pair<int, int> P;

char maze[1001][1001];
int dis[1001][1001];

int main(void){
    int H, W, N;
    int sx, sy;
    cin >> H >> W >> N;
    rep(i, H) {
        rep(j, W) {
            cin >> maze[i][j];
            if(maze[i][j]=='S') sy = i, sx = j;
        }
    }
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    int ans = 0;

    const int INF = 99999999;

    rep(HP, N+1) {
        queue<P> que;
        rep(i, H) rep(j, W) dis[i][j] = INF;
        que.push(P(sx, sy));
        dis[sy][sx] = 0;

        while(que.size()) {
            P p = que.front(); que.pop();
            if(maze[p.second][p.first] == HP+'0') {
                sx = p.first;
                sy = p.second;
                ans += dis[sy][sx];
                break;
            }
            rep(i, 4) {
                int nx = p.first + dx[i];
                int ny = p.second + dy[i];
                if(nx >= 0 && nx < W && ny >= 0 && ny < H 
                   && maze[ny][nx] != 'X' && dis[ny][nx]==INF) {
                    que.push(P(nx, ny));
                    dis[ny][nx] = dis[p.second][p.first] + 1;
                }
            }
        }
    }
    cout << ans << endl;
}