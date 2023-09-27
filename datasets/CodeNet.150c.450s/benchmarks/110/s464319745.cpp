#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#define MAX_N   1000+10

using namespace std;
const int INF=1000000;
typedef pair<int,int> P;
int H,W,N,d[MAX_N][MAX_N];
char Map[MAX_N][MAX_N];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int sx,sy,gx,gy,power,ans;

int bfs(char c)
{
    queue<P> que;
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++)
            d[i][j]=INF;
    que.push(P(sx,sy));
    d[sx][sy]=0;
    P p;
    while(que.size())
    {
        p=que.front();
        que.pop();
        if(Map[p.first][p.second]==c)
        {
            sx=p.first;
            sy=p.second;
            break;
        }
        for(int i=0;i<4;i++)
        {
            int nx=p.first+dx[i];
            int ny=p.second+dy[i];
            if(nx>=0&&nx<H&&ny>=0&&ny<W&&Map[nx][ny]!='X'&&d[nx][ny]==INF)
            {
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return d[sx][sy];
}
int main()
{
    while(cin>>H>>W>>N)
    {
        ans=0;
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                cin>>Map[i][j];
                if(Map[i][j]=='S')
                {
                    sx=i;
                    sy=j;
                    Map[i][j]='.';
                }
            }
        }
        for(int i=1;i<=N;i++)
        {
            ans+=bfs(i+48);
        }
        cout<<ans<<endl;
    }
}