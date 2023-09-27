#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 0x3f3f3f;
int a[300][300];
int vis[300];	//标记是否访问过 
int path[300];	//从起点到该点的距离 
int n;
void Dijkstra(int s)
{
	int min,pos;
	
	memset(vis,0,sizeof(vis));
	
	path[s] = 0;
	vis[s]  = 1;
	
	for(int i = 0; i < n; i++)
	{
		path[i] = a[s][i];
	}
	
	for(int i = 1; i < n; i++)
	{
		min = INF;
		for(int j = 0; j < n; j++)
		{
			if( path[j] < min && !vis[j])
			{
				pos = j;
				min = path[j];
			}
		}
		
		vis[pos] = 1;
		
		for(int j = 0;j < n;j++)
		{
			if(path[pos] + a[pos][j] < path[j] && !vis[j])
			{
				path[j] = path[pos] + a[pos][j];
			}
		}
	}
}

int main()
{
	int m;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j] = INF;
			}
			
			a[i][i] = 0;
		}
		
		for(int i = 0;i<n;i++)
		{
			int x,y,k,l;
			scanf("%d%d",&x,&k);
			
			for(int j=0;j<k;j++)
			{
				scanf("%d%d",&y,&l);
				
				if(a[x][y] > l)
				{
					a[x][y] = l;
				//	a[y][x] = l;
				}
			}
		}
			
			
			
		Dijkstra(0);
		
		for(int i=0;i<n;i++)
		{
			printf("%d %d\n",i,path[i]);
		}
				
	}

}

