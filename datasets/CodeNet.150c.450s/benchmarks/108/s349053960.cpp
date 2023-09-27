#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int G[100][100];
int D[100];
void init() {
	for (int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++)
			G[i][j] = 0;
		D[i] = -1;
	}	
}

void bfs(int src);

int main() {
	init();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v_j;
			cin >> v_j;
			G[u - 1][v_j - 1] = 1;
		}
	}
	bfs(0);
	for (int i = 0; i < n; i++)
		cout << i + 1 << " " << D[i] << endl;
}

void bfs(int src) {
	D[src] = 0;
	queue<int> Q;
	Q.push(src);
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int dst = 0; dst < 100; dst++)
			if (G[cur][dst] == 1 && D[dst] == -1){
				D[dst] = D[cur] + 1;
				Q.push(dst);
			}
	}
}