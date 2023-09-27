#include <iostream>
#include <queue>
#define INF 1000000
using namespace std;
class st
{
	public:
		int vertex;
		int dis;
	st();
	st(int,int);
};

st::st()
{
	vertex=-1;
	dis=-1;
}

st::st(int v,int d)
{
	vertex=v;
	dis=d;
}

int main()
{
	int n;
	cin>>n;
	int g[101][101];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		{
			if (i==j)
				g[i][j]=0;
			else
				g[i][j]=INF;
		}
	for(int i=0;i<n;i++)
	{
		int f,en;
		cin>>f>>en;
		for(int j=0;j<en;j++)
		{
			int t;
			cin>>t;
			g[f][t]=1;

		}
	}

/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<g[i][j]<<" ";
		cout<<endl;
	}
*/
	int visited[101];
	for(int i=0;i<=n;i++)
		visited[i]=INF;

	queue<st> Q;
	st first=st(1,0);
	Q.push(first);
	while(!Q.empty())
	{
		st now=Q.front();
		Q.pop();
		for(int i=1;i<=n;i++)
		{
			if(g[now.vertex][i]+now.dis<visited[i])
			{
				visited[i]=g[now.vertex][i]+now.dis;
				Q.push(st(i,visited[i]));
			}
		}
	}
	
	for(int i=1;i<=n;i++)
		cout<<i<<" "<<(visited[i]>=INF?-1:visited[i])<<endl;
	return 0;
}