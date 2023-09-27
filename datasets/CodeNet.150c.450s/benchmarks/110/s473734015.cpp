#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cctype>
using namespace std;
int d[1025][1025][10];
struct node
{
    int ti;
    int r, c, time;
    node(int ti = 1, int r = 0, int c = 0, int time = 0) : ti(ti),r(r),c(c),time(time){}
};
int m,n,ying;
char a[1025][1025];
int used[1025];
const int dx[4] = {0,0,1,-1};
const int dy[4] = {1,-1,0,0};
bool is_walk(int r, int c)
{
    return r >= 0 && r < m && c >= 0 && c < n && a[r][c] != 'X';
}
int bfs(int r, int c)
{
    d[r][c][1] = 0;
    queue<node> q;
    q.push(node(1,r,c,0));
    while(q.size()){
        node m = q.front(); q.pop();
        if(a[m.r][m.c] - '0' == ying && used[ying]) return m.time;
        for(int i = 0; i < 4; i++){
            int x = m.r + dx[i], y = m.c + dy[i], ti = m.ti,time = m.time;
            if(!is_walk(x,y) || !d[x][y][ti]) continue;
            d[x][y][ti] = 0;
            if(isdigit(a[x][y])){
                if(a[x][y] - '0' == ti)
                  ti++ , used[a[x][y]-'0']++;
            }
            q.push(node(ti,x,y,time+1));
        }
    }
    return -1;
}
int solve()
{
    memset(d,-1,sizeof(d));
    memset(used,0,sizeof(used));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] == 'S'){
                return bfs(i,j);
            }
}
int main()
{
    while(scanf("%d%d%d",&m,&n,&ying) == 3){
        for(int i = 0; i < m; i++)
            scanf("%s",a[i]);
        printf("%d\n",solve());
    }
    return 0;
}