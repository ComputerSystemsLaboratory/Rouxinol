#include <bits/stdc++.h>
#define INF 1e9
using namespace std;
int M[100][100],d[100],p[100];
bool vist[100]={0};
void prim(int n){
	for(int i=0;i<n;i++) d[i] = INF;
	d[0] = 0;
	p[0] = -1;
	int mincost, u;
	while(1){
		mincost = INF;
		for(int i=0;i<n;i++)
			if(!vist[i] && d[i]<mincost)
				mincost = d[i], u = i;
		if(mincost == INF) break;
		vist[u] = 1;
		for(int i=0; i<n; i++)
			if(!vist[i] && M[u][i]!=-1 && d[u]+M[u][i]<d[i])
				d[i] = M[u][i] + d[u],
				p[i] = u;
	}
}
int main()
{	
	memset(M,-1,sizeof(M));
	int n,du,v,u; cin>>n;
	for(int i = 0;i < n;i++){
		scanf("%d%d",&v,&du);
		while(du--)
			scanf("%d",&u),
			scanf("%d",&M[v][u]);
	}
	prim(n);
	for(int i=0; i<n; i++)
		printf("%d %d\n",i,d[i]);
	return 0;
}
