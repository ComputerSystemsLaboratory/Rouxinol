#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<int,int> p;
int n,m;
int xx[10]={1,0,-1,0},yy[10]={0,1,0,-1};
int x[20],y[20];
char a[1100][1100];
int b[1100][1100];
bool d[1100][1100];
int bfs(int f,int e)
{
	memset(b,0,sizeof(b));
	memset(d,false,sizeof(d));
	queue<p> q;
	q.push(p(x[f],y[f]));
	b[x[f]][y[f]]=0;
	d[x[f]][y[f]]=true;
	while(q.size())
	{
		p k=q.front();
		if(k.first==x[e]&&k.second==y[e])
		{
			return b[x[e]][y[e]];
		}
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=k.first+xx[i];
			int ny=k.second+yy[i];
			if(!d[nx][ny]&&nx>=0&&nx<n&&ny>=0&&ny<m&&a[nx][ny]!='X')
			{
				q.push(p(nx,ny));
				b[nx][ny]=b[k.first][k.second]+1;
				d[nx][ny]=true;
			}
		}
	}
}
int main()
{
	int s;
	while(scanf("%d%d%d",&n,&m,&s)!=EOF)
	{
		getchar();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%c",&a[i][j]);
				if(a[i][j]=='S')
				{
					x[0]=i;
					y[0]=j;
					a[i][j]=i;
				}
				else if(a[i][j]>='1'&&a[i][j]<='9')
				{
					x[a[i][j]-'0']=i;
					y[a[i][j]-'0']=j;
					a[i][j]='.';
				}
			}
			getchar();
		}
		ll ss=0;
		for(int i=0;i<s;i++)
		{
			ss+=bfs(i,i+1);
		}
		cout<<ss<<endl;
	}
	return 0;
}
 
