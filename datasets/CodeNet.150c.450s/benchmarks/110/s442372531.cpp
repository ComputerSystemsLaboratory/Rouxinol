#include <iostream>
#include <vector>
#include <algorithm> 
#include <queue>
#include <functional>
using namespace std;

struct data{ int x, y, count; };

const int INF = 10000000;

int w, h, n;
int sx, sy;
int gx, gy;
int vx[] = { 1, 0, -1, 0, };
int vy[] = { 0, 1, 0, -1, };
char field[1001][1001];
int d[1001][1001][11];

int bfs(){

    queue<data> que;

    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            for (int k = 0; k <= n + 1; k++) d[j][i][k] = INF;

    que.push({ sx, sy, 1 });
    d[sx][sy][1] = 0;
    field[sx][sy] = '.';

    while (que.size()){

        data p = que.front(); que.pop();

        if (p.count == n + 1) break;

        for (int i = 0; i < 4; i++){

            int nx = p.x + vx[i], ny = p.y + vy[i], c = p.count;

            if (0 < nx && nx < w + 1 && 0 < ny && ny < h + 1 && field[nx][ny] != 'X'
                && d[nx][ny][c] == INF){

                if (field[nx][ny] != '.' && c == field[nx][ny] - '0'){
                    que.push({ nx, ny, c + 1 });
                    d[nx][ny][c] = d[nx][ny][c + 1] = d[p.x][p.y][c] + 1;
                    continue;
                }

                que.push({ nx, ny, c });
                d[nx][ny][c] = d[p.x][p.y][c] + 1;

            }
        }

    }

    return d[gx][gy][n];
}

int main(void){

    cin >> h >> w >> n;

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cin >> field[j][i];
            if (field[j][i] == 'S'){
                sx = j; sy = i;
            }
            else if (n == field[j][i] - '0'){
                gx = j; gy = i;
            }
        }
    }

    int ans = bfs();

    cout << ans << endl;

}