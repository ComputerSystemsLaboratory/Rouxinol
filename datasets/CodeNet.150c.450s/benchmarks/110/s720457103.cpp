#include <bits/stdc++.h>
using namespace std;

struct P{
    int x, y, dist;
    P(){}
    ~P(){}
    P(const P& r) : x(r.x), y(r.y), dist(r.dist) {}
    P(int a, int b, int d) : x(a), y(b), dist(d) {}
};

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};


int H, W, N;
char field[1000][1010], cpy[1000][1010];

queue<P> que;

int main(){
    while(scanf("%d%d%d", &H, &W, &N) != EOF){
        for(int x = 0; x < H; ++x){
            scanf(" %s", field[x]);
        }
        P loc[10];
        for(int x = 0; x < H; ++x){
            for(int y = 0; y < W; ++y){
                if(field[x][y] == 'S'){
                    loc[0] = P(x, y, 0);
                }
                if('1' <= field[x][y] && field[x][y] <= '9'){
                    loc[field[x][y]-'0'] = P(x, y, 0);
                }
            }
        }
        int ans = 0;
        for(int n = 0; n < N; ++n){
            for(int x = 0; x < H; ++x){
                for(int y = 0; y < W; ++y){
                    cpy[x][y] = field[x][y];
                }
            }
            while(!que.empty()) que.pop();
            que.push(loc[n]);
            cpy[loc[n].x][loc[n].y] = 'X';
            while(!que.empty()){
                P p = que.front();
                que.pop();
                if(p.x == loc[n+1].x && p.y == loc[n+1].y){
                    ans += p.dist;
                    break;
                }
                for(int i = 0; i < 4; ++i){
                    int nx = p.x + dx[i], ny = p.y + dy[i];
                    if(nx < 0 || H <= nx) continue;
                    if(ny < 0 || W <= ny) continue;
                    if(cpy[nx][ny] == 'X') continue;
                    que.push(P(nx, ny, p.dist+1));
                    cpy[nx][ny] = 'X';
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}