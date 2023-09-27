#include <cstdio>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

const int NIL = 2001;
const int MAX = 100;
int G[MAX][MAX];
int color[MAX];
int W[MAX];
int n;

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

void MST() {
	priority_queue<pair<int, int>> PQ;
	PQ.push(make_pair(0, 0));
	W[0] = 0;
	color[0] = BLACK;
	while (!PQ.empty()) {
		int u = PQ.top().second;
		PQ.pop();
		color[u] = BLACK;
		for (int i = 0; i < n; ++i) {
			if (G[u][i] != -1 && G[u][i] < W[i] && color[i] != BLACK) {
				PQ.push(make_pair(G[u][i] * -1, i));
				W[i] = G[u][i];
//				cout << u << ":" << i << ":" << G[u][i] << endl;
			}
		}
	}
}

int main() {

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		W[i] = NIL;
		color[i] = WHITE;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int a;
			scanf("%d", &a);
			G[i][j] = a;
		}
	}

	MST();

	int sum = 0;
	for (int i = 0; i < n; ++i) {
//		cout << i << ":" << W[i] << endl;
		sum += W[i];
	}
	cout << sum << endl;

	return 0;
}