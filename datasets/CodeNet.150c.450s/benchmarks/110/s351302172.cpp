#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

const int M=1005;
char ti[M][M];
int isu[M][M];
int n,m,nn;

int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

queue<int> qu;
void init_bfs()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(ti[i][j]=='S')
            {
                qu.push(i*M+j);
                isu[i][j]=0;
                return;
            }
}
int bfs()
{
    int ans=0;
    int edx,edy;
    for(int ii=1;ii<=nn;ii++)
    {
        while(!qu.empty())
            qu.pop();
        memset(isu,-1,sizeof(isu));
        if(ii==1)
            init_bfs();
        else
        {
            qu.push(edx*M+edy);
            isu[edx][edy]=0;
        }
        int f=0;
        while(!qu.empty())
        {
            int t=qu.front();
            qu.pop();
            int tx=t/M,ty=t%M;
            for(int i=0;i<4;i++)
            {
                int x=tx+dx[i],y=ty+dy[i];
                if(x<1||x>n||y<1||y>m||ti[x][y]=='X'||isu[x][y]!=-1)
                    continue;
                if(ti[x][y]=='0'+ii)
                {
                    ans+=isu[tx][ty]+1;
//                    cout<<ans<<endl;
//                    for(int i=0;i<=n+1;i++)
//                    {
//                        for(int j=0;j<=m+1;j++)
//                            cout<<'\t'<<isu[i][j];
//                        cout<<endl;
//                    }
                    edx=x;edy=y;
                    f=1;
                    break;
                }
                qu.push(x*M+y);
                isu[x][y]=isu[tx][ty]+1;
            }
            if(f==1)
                break;
        }
        if(!f)
            return -1;
    }
    return ans;
}

int main()
{
    //freopen("1.out","w",stdout);
    scanf("%d%d%d",&n,&m,&nn);
    for(int i=1;i<=n;i++)
        scanf("%s",ti[i]+1);
    printf("%d\n",bfs());
    return 0;
}