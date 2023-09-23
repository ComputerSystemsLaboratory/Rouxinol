#include <iostream>
#include <cstdio>

using namespace std;
int w, h, ans;
const int maxn = 105;
char tile[maxn][maxn];

void dfs(int m, int n, char temp)
{
    int a[4] = {-1, 0, 0, 1}, b[4] = {0, -1, 1, 0};
    tile[m][n] = '.';
    for(int i=0; i<4; ++i)
    {
        int x = m + a[i], y = n + b[i];
        if(x>=0 && x<h && y>=0 && y<w && tile[x][y]==temp)
        {
            dfs(x, y, temp);
        }
    }
}

int main()
{
    while(scanf("%d %d", &h, &w)!=EOF && h && w)
    {
        for(int i=0; i<h; ++i)
        {
            scanf("%s", tile[i]);
        }
        ans = 0;
        for(int i=0; i<h; ++i)
        {
            for(int j=0; j<w; ++j)
            {
                if(tile[i][j]!='.')
                {
                    dfs(i, j, tile[i][j]);
                    ++ans;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

