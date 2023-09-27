#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int n,m,k,step[1010][1010],temp[1010][3];
char a[1010][1010];
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
bool vis[1010][1010];
typedef pair<int,int> P;
int bfs(int x,int y,int ex,int ey)
{
	memset(vis,true,sizeof(vis));
	memset(step,0,sizeof(step));
	queue <P> que;
	que.push(P(x,y));
	vis[x][y]=false;
	while(!que.empty())
	{
		P tmp=que.front();que.pop();
		int b=que.size();
		if(tmp.first==ex&&tmp.second==ey)
		  return step[tmp.first][tmp.second];
		for(int i=0;i<4;i++)
		{
			int tx=tmp.first+dx[i];
			int ty=tmp.second+dy[i];
			if(tx>0&&tx<=n&&ty>0&&ty<=m&&vis[tx][ty]==true&&a[tx][ty]!='X')
			{
				que.push(P(tx,ty));
				vis[tx][ty]=false;
				step[tx][ty]=step[tmp.first][tmp.second]+1;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>m>>k;
		int sx,sy;
		for(int i=1;i<=n;i++)
		  for(int j=1;j<=m;j++)
		  {
			cin>>a[i][j];
			if(a[i][j]=='S')
			  sx=i,sy=j;
			//temp[0][0]=i;
			//temp[0][1]=j;
		  }
		a[sx][sy]='0';
		int tot=0,ans=0;
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=n;j++)
			  for(int l=1;l<=m;l++)
			    if(a[j][l]=='0'+i)
			    {
			    	tot=bfs(sx,sy,j,l);
			    	sx=j,sy=l;
				}
			ans+=tot;
		}
		cout<<ans<<endl;
	return 0;
}