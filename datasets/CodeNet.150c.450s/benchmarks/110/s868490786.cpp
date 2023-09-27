#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

typedef std::pair<int, int> Pair;

constexpr int MAX_HW = 1000;
constexpr int MAX_N = 9;
constexpr int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int H, W, N;
int sx[MAX_N], sy[MAX_N], gx[MAX_N], gy[MAX_N];
char map[MAX_HW][MAX_HW];

int bfs(const int& n);

int main(){
    scanf("%d%d%d", &H, &W, &N);
    
    for(int i = 0; i < H; ++i){
        scanf("\n");
        for(int j = 0; j < W; ++j){
            scanf("%c", &map[j][i]);
            if(map[j][i] == 'S'){
                sx[0] = j, sy[0] = i;
            }
            if(map[j][i] >= '1' && map[j][i] < (N + '0')){
                sx[map[j][i] - '0'] = j, sy[map[j][i] - '0'] = i;
                gx[map[j][i] - '0' - 1] = j, gy[map[j][i] - '0' - 1] = i;
            }
            if(map[j][i] == (N + '0')){
                gx[N - 1] = j, gy[N - 1] = i;
            }
        }
    }
    
    int ans = 0;
    for(int i = 0; i < N; ++i){
        ans += bfs(i);
    }
    
    printf("%d\n", ans);
    
    return 0;
}

int bfs(const int& n){
    int dis[MAX_HW][MAX_HW];
    memset(dis, -1, sizeof(dis));
    dis[sx[n]][sy[n]] = 0;
    
    std::queue<Pair> que;
    que.push(Pair(sx[n], sy[n]));
    
    while(que.size()){
        Pair p = que.front(); que.pop();
        
        if(p.first == gx[n] && p.second == gy[n]){
            break;
        }
        
        for(int i = 0; i < 4; ++i){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(nx >= 0 && ny >= 0 && nx < W && ny < H && map[nx][ny] != 'X' && dis[nx][ny] == -1){
                que.push(Pair(nx, ny));
                dis[nx][ny] = dis[p.first][p.second] + 1;
            }
        }
    }
    
    return dis[gx[n]][gy[n]];
}