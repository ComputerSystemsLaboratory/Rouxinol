#include <iostream>
#include <queue>

#define MAX_W 1000
#define MAX_H 1000
#define MAX_N 1000
#define INF -1

typedef std::pair<int, int> P;

const int dx[] = {0, -1, 0, 1}, dy[] = {1, 0, -1, 0};

int w, h, n;
int sx, sy, gx[MAX_N], gy[MAX_N];
char field[MAX_W][MAX_H];

int solve(int _sx, int _sy, int _gx, int _gy);

int main(){
    std::cin >> h >> w >> n;
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            std::cin >> field[j][i];
            if(field[j][i] == 'S')
                sx = j, sy = i;
            
            else if(field[j][i] >= '0' && field[j][i] <= '9')
                gx[field[j][i] - '0'] = j, gy[field[j][i] - '0'] = i;
        }
    }
    
    int ans = 0;
    
    for(int i = 0; i < n; ++i){
        if(i == 0)
            ans += solve(sx, sy, gx[i + 1], gy[i + 1]);
        else
            ans += solve(gx[i], gy[i], gx[i + 1], gy[i + 1]);
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}

int solve(int _sx, int _sy, int _gx, int _gy){
    int dis[MAX_W][MAX_H];
    std::queue<P> que;
    que.push(P(_sx, _sy));
    
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j)
            dis[j][i] = INF;
    }
    
    dis[_sx][_sy] = 0;
    
    while(que.size()){
        P p = que.front();
        que.pop();
        
        if(p.first == _gx && p.second == _gy)
            break;
        
        for(int i = 0; i < 4; ++i){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            
            if(nx >= 0 && ny >= 0 && nx < w && ny < h && field[nx][ny] != 'X' && dis[nx][ny] == INF){
                que.push(P(nx, ny));
                dis[nx][ny] = dis[p.first][p.second] + 1;
            }
        }
    }
    
    return dis[_gx][_gy];
}