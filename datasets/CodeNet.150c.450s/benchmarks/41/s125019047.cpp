#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX = 100;
const long long INF = (1LL << 32);

long long d[MAX][MAX];

void floyd(int n) {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			if (d[i][k] == INF) continue;
			for (int j = 0; j < n; j++) {
				if (d[k][j] == INF) continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main() {
	int v, e;
	scanf("%d %d", &v, &e);
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			d[i][j] = (i == j) ? 0 : INF;
		}
	}

	int s, t, c;
	for (int i = 0; i < e; i++) {
		scanf("%d %d %d", &s, &t, &c);
		d[s][t] = c;
	}

	floyd(v);

	bool isNega = false;
	for (int i = 0; i < v; i++) {
		if (d[i][i] < 0) isNega = true;	
	}
	if (isNega) {
		cout << "NEGATIVE CYCLE" << endl; return 0;
	}

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			if (j != 0) cout << " ";
			if (d[i][j] == INF) cout << "INF";
			else cout << d[i][j];	
		}
		cout << endl;
	}

	return 0;
}

