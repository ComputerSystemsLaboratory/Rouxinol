#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
const int num = 100, INF = 20000000;
int v[num][num], n, d[num], c[num], p[num];
inline void mini() {
	for (int i = 1; i < n; i++) {
		d[i] = INF;
		c[i] = 0;
	}
	d[0] = 0;
	while (1) {
		int u = -1;
		int minv = INF;
		for (int i = 0; i < n; i++) {
			if (minv > d[i] && c[i] == 0) {
				minv = d[i];
				u = i;
			}
		}
		if (u == -1)break;
		for (int i = 0; i < n; i++) {
			if (c[i] == 0 && v[u][i] != 0) {
				if (d[i] > d[u] + v[u][i]) d[i] = d[u] + v[u][i];
				
			}
		}
		c[u] = 1;
	}

}
int main() {
	cin >> n;
	int u, k, s;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			v[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> s;
			cin >> v[u][s];
		}
	}
	mini();
	for (int i = 0; i < n; i++) {
		cout << i << " " << d[i] << endl;
	}
	return 0;
}