#include<bits/stdc++.h>
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3f
#define EPS (1e-10)
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

vector<int>E[100];
int s[100], g[100];
bool used[100];
int t;

void dfs(int u) {
	used[u] = true;
	s[u] = ++t;
	for (int v : E[u]) {
		if (!used[v])dfs(v);
	}
	g[u] = ++t;
}
int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		int u, k; scanf("%d%d", &u, &k); u--;
		rep(j, k) {
			int v; scanf("%d", &v); v--;
			E[u].push_back(v);
		}
	}
	rep(i, n) {
		if (!used[i])dfs(i);
	}
	rep(i, n) {
		printf("%d %d %d\n", i + 1, s[i], g[i]);
	}
}