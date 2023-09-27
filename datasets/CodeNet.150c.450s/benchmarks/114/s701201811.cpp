#include <bits/stdc++.h>
#define INF 2001
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
			if(!vist[i] && M[u][i]!=-1 && M[u][i]<d[i])
				d[i] = M[u][i],
				p[i] = u;
	}
}
int main()
{	int n; cin>>n;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d",&M[i][j]);
	prim(n);
	long long ans = 0;
	for(int i=1; i<n; i++)
		ans += M[i][p[i]];
	cout << ans << endl;
	return 0;
}
