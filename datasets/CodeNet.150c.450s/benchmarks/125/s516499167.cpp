#include <cstdio>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
vector<int> g[100];
int t = 1;
int p[100];
int q[100];

void dfs(int i){
	p[i] = t++;
	rep(j, g[i].size()){
		int v = g[i][j];
		if(!p[v]){
			dfs(v);
		}
	}
	q[i] = t++;
}

int main(){
	scanf("%d", &n);
	rep(i, n){
		int u, k;
		scanf("%d%d", &u, &k);
		rep(j, k){
			int v;
			scanf("%d", &v);
			g[u - 1].push_back(v - 1);
		}
	}
	rep(i, n){
		if(!p[i]){
			dfs(i);
		}
	}
	rep(i, n){
		printf("%d %d %d\n", i + 1, p[i], q[i]);
	}
	return 0;
}