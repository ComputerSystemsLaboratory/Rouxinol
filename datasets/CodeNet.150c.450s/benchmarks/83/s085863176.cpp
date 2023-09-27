#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int main() {
	struct Item {
		int v, w;
	};
	Item it[101];
	int n, W;
	cin >> n >> W;
	for (int i = 1; i <= n; i++) {
		cin >> it[i].v >> it[i].w;
	}
	int mv;
	vector<int> comp;
	int v[101][10001];
    int c[101][10001];
	for (int i = 0; i <= n; i++) {
		c[i][0] = 0;
		v[i][0] = 0;
	}
	for (int i = 0; i <= W; i++) {
		c[0][i] = 0;
		v[0][i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			c[i][j] = c[i - 1][j];
			v[i][j] = 0;
			if (it[i].w > j) continue;
			if (it[i].v + c[i - 1][j - it[i].w] > c[i - 1][j]) {
				c[i][j] = it[i].v + c[i - 1][j - it[i].w];
				v[i][j] = 1;
			}
		}
	}
	mv = c[n][W];
	for (int j = W, i = n; i >= 1; i--) {
		if (v[i][j]) {
			//cout << "i" << i << endl;
			comp.push_back(i);
			j -= it[i].w;
		}
	}
	cout << mv << endl;
	return 0;
}