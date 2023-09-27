#include <iostream>
#include <queue>
using namespace std;
queue<int> qu;
int v[101][101];
int dis[101], n;
int d = 0;
int tf;
inline void b1(int t) {
	for (int i = 1; i <= n; i++) {
		if (v[t][i]) {
			tf = 1;
			qu.push(i);
			dis[i] = d + 1;
			for (int j = 1; j <= n; j++)
				v[j][i] = 0;
		}
	}
}
inline void b2() {
	tf = 0;
	for (int i = 1; i <= n; i++)
		if (dis[i] == d) {
			b1(i);
			qu.pop();
		}
	d++;
}
inline void bfs() {
	tf = 1;
	b1(1);
	d++;
	qu.pop();
	while (tf) {
		b2();
	}
}
int main() {
	int u, k, s;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		dis[i] = -1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			v[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> s;
			v[u][s] = 1;
		}
	}
	qu.push(1);
	for (int i = 1; i <= n; i++)
		v[i][1] = 0;
	bfs();
	for (int i = 1; i <= n; i++) {
		cout << i << " " << dis[i] << endl;
	}
	return 0;
}