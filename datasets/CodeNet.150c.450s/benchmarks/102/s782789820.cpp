#include <cstdio>
#include <cstring>

char map[21][21];
int res;
int w,h;

void dfs(int sx, int sy) {
    if(sx<0 || sx>w-1 || sy<0 || sy>h-1) return;
    if(map[sy][sx] == '#') return;

    res++;
    map[sy][sx] = '#';

    dfs(sx+1,sy);
    dfs(sx,sy+1);
    dfs(sx-1,sy);
    dfs(sx,sy-1);
    return;
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
            scanf("%s", map[j]);

        for(int j=0; j < h; j++)
            for(int i=0; i < w; i++)
                if(map[j][i] == '@')
                    py = j, px =i;
        dfs(px, py);
        printf("%d\n", res);
    }

    return 0;
}