#include <cstdio>
using namespace std;

int w, h;
int c[50][50];

const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y){
    c[x][y] = 0;
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(0 <= nx && nx < h && 0 <= ny && ny < w && c[nx][ny] == 1){
            dfs(nx, ny);
        }
    }
}

int main(){
    while(scanf("%d%d", &w, &h) != EOF && (w||h)){
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                scanf("%d", &c[i][j]);
            }
        }
        int ans = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(c[i][j]){
                    ++ans;
                    dfs(i, j);
                }
            }

        }
        printf("%d\n", ans);
    }
    return 0;
}