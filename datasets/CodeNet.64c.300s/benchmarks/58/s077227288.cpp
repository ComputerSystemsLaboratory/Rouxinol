#include <cstdio>

using namespace std;

#define N 105

int h, w;

char g[N][N];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

void dfs(int x, int y, char c){
        g[x][y] = '.';
        for (int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx >= 0 && nx < h && ny >= 0 && ny < w && g[nx][ny] == c)
                        dfs(nx, ny, c);
        }
}

int main(){
        while(true){
                scanf("%d %d", &h, &w);
                if (h == 0 && w == 0) break;
                for (int i = 0; i < h; i++){
                        getchar();
                        for (int j = 0; j < w; j++){
                                scanf("%c", &g[i][j]);
                        }
                }
                int sum = 0;
                for (int i = 0; i < h; i++){
                        for (int j = 0; j < w; j++){
                                if (g[i][j] != '.'){
                                        dfs(i, j, g[i][j]);
                                        sum++;
                                }
                        }
                }
                printf("%d\n", sum);
        }
        return 0;
}