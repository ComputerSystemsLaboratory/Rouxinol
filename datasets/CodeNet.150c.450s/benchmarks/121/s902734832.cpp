#include <cstdio>
#define Loop(var,time) for (var = 0; var < (time); var++)

char farm[105][105];
int h,w;

void dfs(int x, int y) {
    char fruit = farm[x][y];
    farm[x][y] = '.';
    if (farm[x][y + 1] == fruit) { dfs(x,y + 1); }
    if (farm[x][y - 1] == fruit) { dfs(x,y - 1); }
    if (farm[x + 1][y] == fruit) { dfs(x + 1, y); }
    if (farm[x - 1][y] == fruit) { dfs(x - 1, y); }
}
int main() {
    while(true) {
        int i,x,y;
        int area = 0;
        scanf("%d", &h);
        scanf("%d", &w);
        if (h == 0 && w == 0) { break; }
        Loop(i,h) {
            scanf("%s",farm[i]);
        }
        Loop(x, h) {
            Loop(y, w) {
                if (farm[x][y] != '.') {
                    dfs(x,y);
                    area++;
                }
            }
        }
        printf("%d\n", area);
    }
    return 0;
}