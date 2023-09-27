#include <iostream>
#include <cstdio>
//#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <string>
#include <set>
#include <functional>
#include <numeric>
#include <sstream>
#include <stack>
#include <map>
#include <queue>

#define CL(arr, val)    memset(arr, val, sizeof(arr))

#define ll long long
#define inf 0x7f7f7f7f
#define lc l,m,rt<<1
#define rc m + 1,r,rt<<1|1
#define pi acos(-1.0)

#define L(x)    (x) << 1
#define R(x)    (x) << 1 | 1
#define MID(l, r)   (l + r) >> 1
#define Min(x, y)   (x) < (y) ? (x) : (y)
#define Max(x, y)   (x) < (y) ? (y) : (x)
#define E(x)        (1 << (x))
#define iabs(x)     (x) < 0 ? -(x) : (x)
#define OUT(x)  printf("%I64d\n", x)
#define lowbit(x)   (x)&(-x)
#define Read()  freopen("a.txt", "r", stdin)
#define Write() freopen("dout.txt", "w", stdout);
#define maxn 1000000000
#define N 1010
using namespace std;

int h,w,x;
int dir[4][2]={-1,0,0,1,0,-1,1,0};
typedef pair<int,int> P;
P p;
char maze[N][N];
int d[N][N];

int bfs(char c)
{
    queue<P>que;
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++) d[i][j]=maxn;
    que.push(p);
    d[p.first][p.second]=0;
    P p1,p2;
    while(que.size())
    {
        p1=que.front(); que.pop();
        if(maze[p1.first][p1.second]==c)
        {
            p=p1; break;
        }
        for(int i=0;i<4;i++)
        {
            p2.first=p1.first+dir[i][0];
            p2.second=p1.second+dir[i][1];
            if(p2.first>=0&&p2.first<h&&p2.second>=0&&p2.second<w&&maze[p2.first][p2.second]!='X'&&d[p2.first][p2.second]==maxn)
            {
                que.push(p2);
                d[p2.first][p2.second]=d[p1.first][p1.second]+1;
            }
        }
    }
    return d[p.first][p.second];
}

int main()
{
    //freopen("a.txt","r",stdin);
    while(~scanf("%d%d%d",&h,&w,&x))
    {
        getchar();
        int sum=0;
        for(int i=0;i<h;i++)
        {
            scanf("%s",maze[i]);
            //printf("%s\n",maze[i]);
            for(int j=0;j<w;j++)
            {
                if(maze[i][j]=='S')
                {
                    p.first=i;
                    p.second=j;
                }
            }
        }
        //printf("%d %d\n",p1.first,p1.second);
        for(int i=1;i<=x;i++)
        {
            sum+=bfs('0'+i);
        }
        printf("%d\n",sum);
    }
   return 0;
}