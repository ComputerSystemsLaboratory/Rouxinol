#include <iostream>
#include <stdio.h>
#include <deque>

using namespace std;

const int INF = 0x3f3f3f3f;
typedef pair<int, int> P;
int h, w, n;
int sx, sy;
int gx, gy;
char cmap[1000][1000];
int goalSum;
int goal[10];
int d[1000][1000];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int bfs() {
    int res = 0;
    deque<P> que;
    for (int ci = 0; ci < n; ci++) {  //要?行n次循?，?找n次?点，?次?数?入goal[i], 最后累加起来是res 
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                d[i][j] = INF;
            }
        }
        
        que.push_back(P(sx, sy));
        d[sx][sy] = 0;
        
        while(que.size()) {            
            int x = que.front().first;
            int y = que.front().second;
                        
            if ((int)cmap[x][y] == 49 + ci) {
                goal[ci] = d[x][y];
                sx = x;
                sy = y;
                break;
            }
            
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx >=0 && nx < h && ny >= 0 && ny < w && cmap[nx][ny] != 'X' && d[nx][ny] == INF) {
                    que.push_back(P(nx, ny));
                    d[nx][ny] = d[x][y] + 1;
                }
            }    
            que.pop_front();        
        }
        que.clear(); 
        res += goal[ci];
    }
    return res;
}

int main() {
    cin >> h >> w >> n;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> cmap[i][j];
            if (cmap[i][j] == 'S') {
                sx = i;
                sy = j;
            }
        }
    }
    goalSum = bfs();
    cout << goalSum << endl;
    return 0;
}