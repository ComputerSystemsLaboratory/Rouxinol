#include <queue>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 1111;
const int cx[] = {0, 0, 1, -1}, cy[] = {1, -1, 0, 0};
char maze[N][N];
int step[N][N];
int h, w, n, sx, sy, ans;

int bfs(int cheese){
    memset(step, -1, sizeof(step));
    queue<pair<int, int> > que;
    que.push(make_pair(sx, sy));
    step[sx][sy] = 0;
    while(!que.empty()){
        int x = que.front().first, y = que.front().second;
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = x + cx[i], ny = y + cy[i];
            if(nx < 0 || h <= nx || ny < 0 || w <= ny || maze[nx][ny] == 'X' || step[nx][ny] != -1) continue;
            step[nx][ny] = step[x][y] + 1;
            if(maze[nx][ny] - '0' == cheese){
                sx = nx;
                sy = ny;
                return step[nx][ny];
            }
            que.push(make_pair(nx, ny));
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> h >> w >> n){
        for(int i = 0; i < h; ++i)
            for(int j = 0; j < w; ++j){
                cin >> maze[i][j];
                if(maze[i][j] == 'S'){
                    sx = i;
                    sy = j;
                }
            }
        ans = 0;
        for(int i = 1; i <= n; ++i)
            ans += bfs(i);
        cout << ans << endl;
    }
    return 0;
}