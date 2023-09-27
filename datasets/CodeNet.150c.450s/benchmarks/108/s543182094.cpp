#include <utility>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int D[110]; // ?????¢????¨???¶
int v, A[100][100], u, k, w;
queue<int> Q;

void bfs(int src) {

	Q.push(src);
	D[src] = 0;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int i = 0; i < v; ++i) {
			if (A[cur][i] == 1 && D[i] == 0) {
				D[i] = D[cur] + 1;
				Q.push(i);
			}
		}
	}

	for (int l = 0; l < v; ++l) {
		if (D[l] == 0) { D[l] = -1; }
		if (l == 0) { D[l] = 0; }
		cout << l+1 << " " << D[l] << endl;
	}

}

int main(){
	cin >> v;
	// ???????????§??????v
	for (int i = 0; i < v; ++i) {

		cin >> u >> k;
		// ??????????????????u???k?????\?????????????????°??????

		for (int j = 0; j < k; ++j) {

			cin >> w;
			A[u - 1][w - 1] = 1;

			// ??£??\???????????§?¨??????????????????????????????????

		}
	}

	
	bfs(0);

}