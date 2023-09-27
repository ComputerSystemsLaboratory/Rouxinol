#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vec;
typedef vector<vec> Graph;

int G[110][110];

int main()
{
	memset(G,0,sizeof(G));
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int u,t;
		scanf("%d%d",&u,&t);
		u--;
		for(int j=0;j<t;j++)
		{
			int v;
			scanf("%d",&v);
			v--;
			G[u][v]=1;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			printf("%d%c",G[i][j],j+1==n?'\n':' ');
	return 0;
}