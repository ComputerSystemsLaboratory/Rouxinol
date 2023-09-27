#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
const int num = 100;
int v[num][num], n, c[num], p[num], d[num];;
inline int mini(int k) {
	for (int i = 0; i < n; i++) {
		d[i] = 99999999;
	}

	d[k] = 0;
	p[k] = -1;
	while (1) {
		int minv = 99999999, u = -1;
		for (int i = 0; i < n; i++) {
			if (d[i] < minv && c[i] == 0) {
				minv = d[i];
				u = i;
			}
		}
		if (u == -1) break;
		for (int i = 0; i < n; i++) {
			if (v[u][i] != -1 && c[i] == 0) {
				if (d[i] > v[u][i]) {
					d[i] = v[u][i];
					p[i] = u;
				}
			}
		}
		c[u] = 1;
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if(p[i] != -1) sum += v[i][p[i]];
	}
	return sum;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		c[i] = 0;
	}
	cout << mini(0) << endl;
	return 0;
}