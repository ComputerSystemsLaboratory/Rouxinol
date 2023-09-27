#include <iostream>
#include <algorithm>
#include <queue>
#define N 100
using namespace std;

int color[N], d[N];
int M[N][N];


void bfs(int n) {
	queue<int> Q;
	d[0] = 0;
	for (int i = 1;i < n;i++) d[i] = -1;
	Q.push(0);
	color[0] = 1;
	while (!Q.empty()) {
	  for (int i = 0;i < n;i++)
		  if (M[Q.front()][i] == 1) {
			  if (color[i] == 0) {
				  d[i] = d[Q.front()] + 1;
				  color[i] = 1;
				  Q.push(i);
			  }
		  }
		  Q.pop();
	}
	for (int i = 0;i < n;i++)
		cout << i + 1 << " " << d[i] << endl;
}


int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int u; cin >> u;
		int k; cin >> k;
		for (int j = 0;j < k;j++) {
			int v; cin >> v;
			M[u-1][v-1] = 1;
		}
	}

	bfs(n);

}