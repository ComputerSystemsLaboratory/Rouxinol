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

int prim(){
	for (int i = 0; i < n; ++i) {
		d[i] = FAR;
		p[i] = -1;
		visited[i] = false;
	}

	d[0] = 0;
	while (true)
	{
		int mi = FAR;
		int u = -1;
		for (int i = 0; i < n; ++i)	{
			if (!visited[i] && d[i] < mi){
				u = i;
				mi = d[i];
			}
		}

		if (-1 == u) break;
		visited[u] = true;

		for (int v = 0; v < n; ++v) {
			if (!visited[v] && m[u][v] < d[v]){
				p[v] = u;
				d[v] = m[u][v];
			}
		}
	}

	int res = 0;
	for (int i = 0; i < n; ++i) {
		if (p[i] != -1) res += m[i][p[i]];
	}
	return res;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int e; cin >> e;
			m[i][j] = ((e == -1) ? FAR : e);
		}
	}

	cout << prim() << endl;

	return 0;
}