#include <cstdio>
#include <cstring>

const int MAX_H = 100;
const int MAX_W = 100;

//输入
int H, W;
char g[MAX_H][MAX_W + 1];

int d[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};        //方向

//深度优先遍历g[i][j]同类局域
void dfs(int x, int y, int c){
    for(int i = 0; i < 4; i ++){
        int nx = x + d[i][0], ny = y + d[i][1];
        if(0 <= nx && nx < H && 0 <= ny && ny < W && g[nx][ny] == c){
            g[nx][ny] = '1';
            dfs(nx, ny, c);
        }
    }
}

void solve(){
    //遍历果园，每到一个新位置，遍历该位置能到达的地方
    int ans = 0;
    for(int i = 0; i < H; i ++){
        for(int j = 0; j < W; j ++){
            if(g[i][j] != '1'){
                ans ++;
                char c = g[i][j];
                g[i][j] = '1';
                dfs(i, j, c);
            }
        }
    }
    printf("%d\n", ans);
}

int main(int argc, char const *argv[]){

    while(scanf("%d %d", &H, &W)){
        if(H == 0 && W == 0) break;
        for(int i = 0; i < H; i ++){
            scanf("%s", g[i]);
        }
        solve();
    }

    return 0;
}
