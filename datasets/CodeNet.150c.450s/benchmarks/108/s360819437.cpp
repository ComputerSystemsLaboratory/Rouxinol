#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int GREY = 1;
static const int BLACK = 2;

int n, m[N][N];
bool visited[N];
int d[N], dist;


void bfs(int i){
	queue<int> q; q.push(i);
	visited[i] = true;

	while (!q.empty()) {
		int u = q.front(); q.pop();
		for (int v = 0; v < n; ++v) {
			if (!visited[v] && m[u][v]){
				d[v] = d[u] + 1;
				visited[v] = true;
				q.push(v);
			}
		}
	}
}


void search(){
	for (int i = 0; i < n; ++i) {
		d[i] = -1;
		visited[i] = false;
	}
	d[0] = 0;
	bfs(0);

	for (int i = 0; i < n; ++i)	cout << i + 1 << " " << d[i] << endl;
}


int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) m[i][j] = 0;
	}

	for (int i = 0; i < n; ++i) {
		int u, d; cin >> u >> d;
		for (int j = 0; j < d; ++j) {
			int v; cin >> v;
			m[u - 1][v - 1] = 1;
		}
	}

	search();

	return 0;
}