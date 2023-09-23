#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<30;
const int maxn = 15;
int d[maxn][maxn];
int E,V;

long long sum;

void warshall_floyd(){
	for(int k=0; k<V; k++)
		for(int i=0; i<V; i++)
			for(int j=0; j<V; j++)
				d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
}

int main(){
	while(scanf("%d",&E) && E){
		memset(d, 0x3f, maxn * maxn * sizeof(int));

		for(int i=0; i<maxn; i++) d[i][i] = 0;

		V = 0;
		for(int i=0; i<E; i++){
			int u,v,w;
			scanf("%d%d%d",&u,&v,&w);
			d[u][v] = d[v][u] = w;
			V = max(V,max(v,u)+1);
		}

		warshall_floyd();

		int ans = INF, pos;
		for(int i=0; i<V; i++){
			sum = 0;
			for(int j=0; j<V; j++)
				sum += d[i][j];
			if(ans > sum){
				ans = sum;
				pos = i;
			}
		}

		printf("%d %d\n",pos,ans);
	}
}