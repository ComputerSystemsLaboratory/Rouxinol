#include <iostream>
#include <utility>
#include <queue>
#include <vector>

#define MAX 1000
#define MAXCHEESE 10

char map[MAX][MAX];
int d[MAX][MAX];
int W,H,N;
typedef std::pair<int, int> P;
std::vector<P> cheese(MAXCHEESE); // 0番目はスタート
int sx, sy;
int gx, gy;
int dx[4] = {0,-1,1,0};
int dy[4] = {-1,0,0,1};

int bfs(int goal){
    sx = cheese[goal-1].first;
    sy = cheese[goal-1].second;
    gx = cheese[goal].first;
    gy = cheese[goal].second;
    std::queue<P> que;
    for(int j=0; j<H; j++){
        for(int i=0; i<W; i++){
            d[i][j] = -1;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy] = 0;

    while(que.size() != 0){
        P p = que.front();
        que.pop();

        for(int i = 0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0 <= nx && nx < W && 0 <= ny && ny <= H && map[nx][ny] != 'X' && d[nx][ny] == -1){
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;
                if(nx == gx && ny == gy) return d[nx][ny];
            }
        }
    }
    return -1;
}

int main(){
    std::cin >> H >> W >> N;

    std::string tmp;
    for(int j=0; j<H; j++){
        std::cin >> tmp;
        for(int i=0; i<W; i++){
            map[i][j] = tmp[i];
            if (map[i][j] == 'S') cheese[0] = P(i,j);
            if ('0' <= map[i][j] && map[i][j] <= '9'){
                int x = map[i][j] - '0';
                cheese[x] = P(i,j);
            }
        }
    }

    int ans = 0;

    for(int i = 1; i<=N; i++){
        if(bfs(i) == -1){
            ans = -1;
            break;
        }
        ans += bfs(i);
    }

    std::cout << ans << "\n";

    return 0;
}

