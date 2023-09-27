#include <iostream>
#include <queue>
using namespace std;

int a[100][100];
int n;
int D[100];
void bfs(int src) {
	queue<int> Q;
	Q.push(src);
	D[src] = 0;
	while (! Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int dst=0; dst<n; ++dst) {
			if (a[cur][dst] == 1 && D[dst] == -1) {
				D[dst] = D[cur]+1;
				Q.push(dst);
			}
		}
	}
}

int main() {
	cin >> n;
	int p,q,r;
	for (int i=0; i<n; ++i) {
		cin >> p >> q;
		D[i] = -1;
		for (int i=0; i<q; ++i) {
			cin >> r;
			a[p-1][r-1] = 1;
		}
	}
	bfs(0);
	for (int i=0; i<n; ++i) {
		cout << i+1 << " " << D[i] << endl;
	}
}