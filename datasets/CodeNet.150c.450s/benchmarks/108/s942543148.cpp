#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int M[101][101], d[101], n;

void set()
{
	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u][v] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
		d[i] = -1;
}

void bfs(int x)
{
	queue<int> Q;

	Q.push(x);
	d[x] = 0;

	while (!Q.empty()) {
		int u = Q.front();
		for (int i = 1; i <= n; i++) {
			if (M[u][i] == 1 && d[i] == -1) {
				Q.push(i);
				d[i] = d[u] + 1;	
			}
		}
		Q.pop();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	set();

	bfs(1);

	for (int i = 1; i <= n; i++)
		cout << i << " " << d[i] << endl;

	return 0;
}