#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 100

int n, s[MAX] = {}, d[MAX], f[MAX], t = 0;
bool M[MAX][MAX] = {};

void dfs(int u) {
	int v;
	s[u] = 1;
	d[u] = ++t;
	for (int v = 0; v < n; v++) {
		if (M[u][v] == false)continue;
		if (s[v] == 0) {
			dfs(v);
		}
	}
	s[u] = 2;
	f[u] = ++t;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int u, k; cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			int v; cin >> v;
			v--;
			M[u][v] = true;
		}
	}

	for (int u = 0; u < n; u++) {
		if (s[u] == 0)dfs(u);
	}
	for (int u = 0; u < n; u++) {
		printf("%d %d %d\n", u + 1, d[u], f[u]);
	}
	return 0;
}