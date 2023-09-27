#include <cstdio>


int W, H;
char Maps[120][120];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
void dfs(int x, int y);
int ans;

int main(void) {
    while (scanf("%d %d", &H, &W)!=EOF && W||H) {
        
        for (int i = 0; i<H; i++)
            scanf("%s", Maps[i]);
        
        for (int i = 0; i<H; i++)
            for (int j = 0; j<W; j++)
                if (Maps[i][j]!=' ') {
                    dfs(i, j);
                    ans++;
                }
        
        printf("%d\n", ans);
        ans = 0;
    }
    return 0;
}

void dfs(int x, int y) {
    char tmp = Maps[x][y];
    Maps[x][y] = ' ';
    for (int i = 0; i<4; i++) {
        int nx = x+dx[i], ny = y+dy[i];
        if (nx>=0 && nx<H && ny>=0 && ny<W && Maps[nx][ny]==tmp) dfs(nx, ny);
    }
}