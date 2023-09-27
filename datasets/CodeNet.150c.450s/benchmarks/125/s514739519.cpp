/**
 * Depth first search.
 * start from node 1
 * 1) increment time 
 * 2) find non visited adjacent node
 * 3) if found move to that node.  d[v'] = time
 * 4) if not found. f[v] = time
 * 5) else end.
 * 5) go to 2.
 */

#include <iostream>
using namespace std;
const int N = 101;
int adj[N][N] = {0};
int d[N]={0};
int f[N]={0};
int t = 0;

void dfs(int n) {
	if (d[n]) return;
	d[n]=++t;
	int k = adj[n][0];
	for (int j=1;j<=k;j++) {
		dfs(adj[n][j]);
	}
	f[n]=++t;
}

int main()
{
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		int j, k;
		cin >> j >> k;
		adj[j][0]=k;
		for (int m=1;m<=k;m++) {
			int a;
			cin >> a;
			adj[j][m]=a;
		}
	}

	for (int i=1;i<=n;i++){
		dfs(i);
	}

	for (int i=1;i<=n;i++){
		cout << i << ' ' << d[i] << ' ' << f[i] << endl;
	}

	return 0;
}