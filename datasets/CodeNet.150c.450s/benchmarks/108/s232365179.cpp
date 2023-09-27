#include <iostream>
#include <queue>
using namespace std;
static const int N = 100;
static const int INF = (1 << 21);

int n, M[N][N];
int d[N];

void BFS(int s){
	queue<int> q;
	q.push(s);
	for (int i = 0; i < n; i++) {
		d[i] = INF;
	}
	d[s] = 0;
	int u;
	while (!q.empty()) {
		u = q.front();
		q.pop();
		for (int v = 0; v < n; v++) {
			if (M[u][v] == 1 && d[v] == INF) {
				d[v] = d[u] + 1;
				q.push(v);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i+1 << " " << ( (d[i] == INF) ? -1 : d[i]) << endl;
	}
}
int main(int argc, char *argv[]) {
	int u, k, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	BFS(0);
	return 0;
}
