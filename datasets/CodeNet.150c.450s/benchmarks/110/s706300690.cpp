#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)
 
typedef pair<int, int> P;

int H, W, N;
char m[1001][1001];
int d[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int i, int j) {
    char c = m[i][j];
    m[i][j] = '.';
    if(j+1<W && m[i][j+1]==c) dfs(i, j+1);
    if(j>0 && m[i][j-1]==c) dfs(i, j-1);
    if(i+1<H && m[i+1][j]==c) dfs(i+1, j);
    if(i>0 && m[i-1][j]==c) dfs(i-1, j);
}
int main() {
    cin >> H >> W >> N;
    int x, y;
    rep(i, H) {
        rep(j, W) {
            cin >> m[i][j];
            if(m[i][j]=='S') {
                x = j;
                y = i;
            }
        }
    }

    int HP = 1;
    int time = 0;
    int dist = 0;
    while(HP <= N) {
        rep(i, H) {
            rep(j, W) {
                d[i][j] = -1;
            }
        }
        d[y][x] = dist;
        queue<P> q;
        q.push(P(x, y));
        while(q.size()>0) {
            P p = q.front(); q.pop();
            int cx = p.first;
            int cy = p.second;
            if(m[cy][cx]=='0'+HP) {
                x = cx;
                y = cy;
                dist = d[y][x];
                HP++;
                break;
            } 
            rep(i, 4) {
                int nx = cx+dx[i];
                int ny = cy+dy[i];
                if(0<=nx && nx<W && 0<=ny && ny<H &&
                        d[ny][nx] == -1 && m[ny][nx]!='X') {
                    q.push(P(nx, ny));
                    d[ny][nx] = d[cy][cx] + 1;
                }
            }
        }
    }
    cout << dist << endl;
    return 0;
}