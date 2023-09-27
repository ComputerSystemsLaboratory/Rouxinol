/*
Floyd Warshall Algorithm
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
*/

#include <bits/stdc++.h>
#define si( x ) scanf("%d", &x)
#define sll( x ) scanf("%lld", &x)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;

typedef long long ll;

int n, m, inf = 2000000001;
int cost[200][200];

int main(){
	int i, j, k;
	si(n), si(m);
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == j) cost[i][j] = 0;
			else cost[i][j] = inf;
		}
	}
	for(i = 0; i < m; i++){
		int u,v,w;
		si(u), si(v), si(w);
		cost[u][v] = w;
	}
	for(k = 0; k < n; k++)
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				if(cost[i][k] != inf && cost[k][j] != inf && cost[i][j] > (cost[i][k] + cost[k][j]))
					cost[i][j] = cost[i][k] + cost[k][j];
	
	for(i = 0; i < n; i++) if(cost[i][i] < 0){
		printf("NEGATIVE CYCLE\n");
		return 0;
	}
	
	for(i = 0; i < n; i++){
		if(cost[i][0] == inf) printf("INF");
		else printf("%d", cost[i][0]);
		for(j = 1; j < n; j++){
			if(cost[i][j] == inf) printf(" INF");
			else printf(" %d", cost[i][j]);
		}
		printf("\n");
	}
}
