#include <iostream>
#include <algorithm>
using namespace std;
const int num = 100, INF = 2000000000;
int d[num][num];
int n;
inline void floyd() {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			if (d[i][k] == INF) continue;
			for (int j = 0; j < n; j++) {
				if (d[k][j] == INF) continue;
				else d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}
int main() {
	int e, s, t, w;
	cin >> n >> e;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)d[i][j] =((i == j) ? 0 : INF);
	}
	for (int i = 0; i < e; i++) {
		cin >> s >> t >> w;
		d[s][t] = w;
	}
	floyd();
	int tf = 1;
	for (int i = 0; i < n; i++) {
			if (d[i][i] < 0)  tf = 0;
		}
	if (tf == 0) cout << "NEGATIVE CYCLE" << endl;
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (j) cout << " ";
				if (d[i][j] == INF)cout << "INF";
				else cout << d[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}