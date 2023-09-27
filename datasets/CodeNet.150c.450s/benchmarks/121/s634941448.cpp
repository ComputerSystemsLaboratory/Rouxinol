//aoj 0118 Property Distribution
//多次dfs求?通?个数，有3?果子
//注意H和W，不是row和col
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

char tile[123][123];

int H, W;
int ans;
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};

bool out_of_range(int x, int y)
{
    return x<0 || x>=H || y<0 || y>=W;
}

void dfs(int x, int y, char now)
{
    if(out_of_range(x,y) || tile[x][y]!=now) return;//超界或者不是本区域
    int nx, ny;
    tile[x][y] = '%';//????不要忘?
    for(int i=0; i<4; ++i)
    {
        nx = x+dx[i], ny = y+dy[i];
        dfs(nx,ny,now);
    }
}

void debug()
{
    for(int i=0; i<H; ++i)
    {
        for(int j=0; j<W; ++j)
        {
            printf("%c", tile[i][j]);
        }
        putchar(10);
    }
    putchar(10);
}

void solve()
{
    ans = 0;
    for(int i=0; i<H; ++i)
    {
        for(int j=0; j<W; ++j)
        {
            if(tile[i][j]!='%') {dfs(i,j,tile[i][j]); ans++;}
        }
    }
    //debug();
    printf("%d\n", ans);
}

int main()
{
    while(scanf("%d %d", &H, &W)==2 && H && W)
    {
        for(int i=0; i<H; ++i) scanf("%s", tile[i]);
        solve();
    }
    return 0;
}