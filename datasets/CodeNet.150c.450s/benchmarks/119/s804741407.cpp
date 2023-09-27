#include <cstdio>
#include <cstring>

char map[51][51];
int res;
int w,h;

int dfs(int sx, int sy) {
    if(sx<0 || sx>w-1 || sy<0 || sy>h-1) return 0;
    if(map[sy][sx] == '0') return 0;

    map[sy][sx] = '0';

    dfs(sx+1,sy);
    dfs(sx,sy+1);
    dfs(sx-1,sy);
    dfs(sx,sy-1);
    dfs(sx+1,sy+1);
    dfs(sx+1,sy-1);
    dfs(sx-1,sy+1);
    dfs(sx-1,sy-1);
    return 1;
}

int main(void)
{
    int px,py;

    while(true)
    {
        res = 0;
        scanf("%d%d", &w, &h);
        if(!w && !h) break;
        for(int j=0; j < h; j++)
        for(int i=0; i < w; i++)
            scanf("%s", &map[j][i]);

        for(int j=0; j < h; j++)
        for(int i=0; i < w; i++)
            res += dfs(i, j);

        printf("%d\n", res);
    }

    return 0;
}