#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
#include<algorithm>

using namespace std;

const long long INF = 198000000002;
const int maxn = 9905;
long long d[maxn][maxn];
long long dd[110];

struct edge{
	long long from;
	long long to;
	long long dist;
}es[maxn];

bool negative_bool(long long n, long long m){
	memset(dd, 198000000001, sizeof(dd));
	bool flag;
	
	for(int i = 0; i < n-1; i++){
		flag = false;
		for(int j = 0; j < m; j++){
			if(dd[es[j].to] > dd[es[j].from] + es[j].dist){
				dd[es[j].to] = dd[es[j].from] + es[j].dist;
				flag = true;
			}
		}
		if(!flag) break;
	}
	
	for(int i = 0; i < m; i++)
		if(dd[es[i].to] > dd[es[i].from] + es[i].dist){
			return true;
		}
		
	return false;
}

int main()
{
	long long V, E;
	while(scanf("%lld%lld", &V, &E) != EOF){
		for(long long i = 0; i < V; i++)
			for(long long j = 0; j < V; j++){
				if(i == j) d[i][j] = 0;
				else d[i][j] = INF;
			}
					
		for(long long i = 0; i < E; i++){
			long long a, b, c;
			scanf("%lld%lld%lld", &a, &b, &c);
			d[a][b] = c;
			es[i].from = a; es[i].to = b; es[i].dist = c;
		}
		
		if(negative_bool(V, E)){
			printf("NEGATIVE CYCLE\n");
			continue;
		}
		
		for(long long k = 0; k < V; k++)
			for(long long i = 0; i < V; i++)
				for(long long j = 0; j < V; j++){
					if((d[i][k] < 0&&d[k][j] == INF)||(d[k][j] < 0&&d[i][k] == INF)) continue;
					d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
				}
					
		long long i, j;							
		for(i = 0; i < V; i++){
			for(j = 0; j < V-1; j++){
			 	if(d[i][j] == INF) printf("INF ");
			 	else printf("%lld ", d[i][j]);
			}
			if(d[i][j] == INF) printf("INF\n");
			else printf("%lld\n", d[i][j]);
		}
		
	} 
	return 0;
}


/*4 6
0 1 6
1 2 3
2 0 -4
1 3 4
2 3 1
3 2 7*/
