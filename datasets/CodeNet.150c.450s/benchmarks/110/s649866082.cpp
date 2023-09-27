#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>

#define numof(array) (sizeof (array) / sizeof *(array))
using namespace std;

#define INF (1 << 29)
static const int dx[] = {1, 0, -1, 0};
static const int dy[] = {0, 1, 0, -1};

#define MAX_H 1000
#define MAX_W 1000

int H, W, N;
char field[MAX_H][MAX_W];
int d[MAX_H][MAX_W];//スタートからの距離


typedef pair<int, int> P;

int bfs(const P start, const P goal)
{
    queue<P> que;
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            d[i][j] = INF;
        }
    }

    que.push(start);
    d[start.second][start.first] = 0;


    while (que.size()) {
        P p = que.front();
        que.pop();
        if (p == goal) break;
        
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
                
            if (0 <= nx && nx < W && 0 <= ny && ny < H && field[ny][nx] != 'X' && d[ny][nx] == INF) {
                que.push(P(nx, ny));
                d[ny][nx] = d[p.second][p.first] + 1;
            }
            
        }
    }
    return d[goal.second][goal.first];
}

    
int main(void)
{
    cin  >> H >> W >> N;

    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            field[y][x] = 'X';
        }
    }

    P zahyo[10];//スタートと工場1,2,3...の座標
    for (int i = 0; i < 10; i++) {
        zahyo[i] = P(-1, -1);
    }


    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            cin >> field[y][x];
            
            //スタートと工場を見つけておく
            if ('0' < field[y][x] && field[y][x] <= '9') {
                zahyo[field[y][x] - '0'] = P(x, y);
            }
            if (field[y][x] == 'S') {
                zahyo[0] = P(x, y);
            }
            
        }
    }
        
    int cnt = 0;
    int answer = 0;
    while (cnt < N) {//-1でない間
        answer += bfs(zahyo[cnt], zahyo[cnt+1]);
        cnt++;
    }

    cout << answer << endl;
	return 0;
}