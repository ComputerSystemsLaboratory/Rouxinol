#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<stack> 
#include<bitset>
#include<iterator>
#include<numeric>
using namespace std;
typedef long long ll;

int E,V;
int G[11][11];
int d[11];

void floyd(){
	for(int k = 0 ; k < V ; k ++){
		for(int i = 0 ; i < V ; i ++){
			for(int j = 0 ; j < V ; j ++){
				G[i][j] = min(G[i][j] , G[i][k]+G[k][j]);
			}
		}
	}
}

int main(){
	while(scanf("%d",&E) != EOF && E){
		int u,v,w;
		V = 0;
		memset(G,0x3f3f3f3f,sizeof(G));
		for(int i = 0 ; i < E ; i ++){
			scanf("%d%d%d",&u,&v,&w);
			G[u][v] = w;
			G[v][u] = w;
			// ?点
		 	V = max(V,max(u,v)+1);
		}
		for(int i = 0 ; i < V ; i ++) G[i][i] = 0;
		floyd();
		
		memset(d,0,sizeof(d));		
		int index = 0;
		int ans = 0x3f3f3f3f;
		for(int i = 0 ; i < V ; i ++){
			for(int j = 0 ; j < V ; j ++){
				d[i] += G[i][j];	
			}
			if(ans > d[i]){
				index = i;
				ans = d[i];
			}
		}
		printf("%d %d\n",index,ans);
		
	}	
	return 0;
}