#include <cstdio>
#include <cstring>

char map[1000][1000];
int h,w,res;

void dfs(int x, int y, char c) {
    if(x<0 || y<0 || x>=w || y>=h) return;
    if(map[y][x] == c) {
        map[y][x] = '.';
        dfs(x-1,y,c); dfs(x,y-1,c);
        dfs(x+1,y,c); dfs(x,y+1,c);
    }
}

int main(void) {
    while(true) {
        res = 0;
        memset(map, 0, sizeof(map));

        scanf("%d%d",&h,&w);
        if(!h && !w) break;
        for(int i=0; i<h; i++) scanf("%s",map[i]);

        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++)
                if(map[i][j] != '.') {
                    res++;
                    dfs(j, i, map[i][j]);
                }
        printf("%d\n", res);

    }
    return 0;
}