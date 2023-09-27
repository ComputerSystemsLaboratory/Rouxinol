#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

static const long long FAR = (1LL << 21);
static const int N = 100;

int n, m[N][N];
bool visited[N];
int d[N], p[N];

void dijskra(){
	for (int i = 0; i < n; ++i) {
		d[i] = FAR;
		visited[i] = false;
	}

	d[0] = 0;
	while (true) {
		int mi = FAR;
		int u = -1;
		for (int i = 0; i < n; ++i) {
			if (!visited[i] && d[i] < mi){
				u = i;
				mi = d[i];
			}
		}

		if (-1 == u) break;
		visited[u] = true;

		for (int v = 0; v < n; ++v) {
			if (!visited[v] && (m[u][v] != FAR) && (d[u] + m[u][v] < d[v])) {
				d[v] = d[u] + m[u][v];
			}
		}
	}

	for (int i = 0; i < n; ++i)
		cout << i << " " << ((d[i] == FAR) ? -1 : d[i]) << endl;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j) m[i][j] = FAR;
	}

	for (int i = 0; i < n; ++i) {
		int u, k; cin >> u >> k;
		for (int j = 0; j < k; ++j)	{
			int v, e; cin >> v >> e;
			m[u][v] = e;
		}
	}
	dijskra();

	return 0;
}