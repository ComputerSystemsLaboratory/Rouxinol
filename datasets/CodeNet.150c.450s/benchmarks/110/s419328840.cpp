#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
const int maxn=1100;
const int INF=10000000;
typedef pair<int,int> P;
char s[maxn][maxn];
int d[maxn][maxn];
int H,W,n;
P point[maxn];
int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
int bfs(int sx,int sy,int gx,int gy)
{
    queue<P>que;
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++)
        d[i][j]=-1;
    que.push(P(sx,sy));
    d[sx][sy]=0;
    while(que.size()){
        P p=que.front(); que.pop();
        if(p.first==gx&&p.second==gy) break;
        for(int i=0;i<4;i++)
        {
            int nx=p.first+dx[i],ny=p.second+dy[i];
            if(nx>=0&&nx<H&&ny>=0&&ny<W&&s[nx][ny]!='X'&&d[nx][ny]==-1){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    return d[gx][gy];
}
int main()
{
    while(cin>>H>>W>>n)
    {
        for(int i=0;i<H;i++)
            for(int j=0;j<W;j++)
            cin>>s[i][j];
        int sx,sy,gx,gy;
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(s[i][j]=='S')
                {
                    sx=i; sy=j; break;
                }
            }
        }
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(s[i][j]>='1'&&s[i][j]<='9')
                {
                    int t=s[i][j]-'0';
                    point[t].first=i;
                    point[t].second=j;
                }
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            gx=point[i].first;
            gy=point[i].second;
            cnt+=bfs(sx,sy,gx,gy);
            sx=gx;
            sy=gy;
        }
        cout<<cnt<<endl;
    }
    return 0;
}