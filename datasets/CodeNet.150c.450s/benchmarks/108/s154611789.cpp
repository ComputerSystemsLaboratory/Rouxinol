#include<cstdio>
#include<queue>
using namespace std;

static const int MAX_N = 100;
static const int INFTY = (1<<21);

int n, adj[MAX_N][MAX_N];
int d[MAX_N];

void dfs(int s){
	queue<int> q;
	q.push(s);
	for(int i = 0; i < n; i++){
		d[i] = INFTY;
	}
	d[s] = 0;
	int u;
	while(!q.empty()){
		u = q.front(); q.pop();
		for(int v = 0; v < n; v++){
			if(adj[u][v] == 0) continue;
			if(d[v] != INFTY) continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d %d\n", i + 1, ((d[i] == INFTY) ? (-1) : d[i]));
	}
}

int main(void){
	int u, k, v;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &u);
		u--;
		scanf("%d", &k);
		for(int j = 0; j < k; j++){
			scanf("%d", &v);
			v--;
			adj[u][v] = 1;
		}
	}

	dfs(0);
	return 0;
}