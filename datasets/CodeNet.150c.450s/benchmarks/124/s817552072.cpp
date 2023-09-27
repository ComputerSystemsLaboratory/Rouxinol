#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
	int n, u, k, v, c, i, j, d[100][100], m[100][100], o, p[100] = { 0 }, e, q = 0;
	memset(m, 0x7f, sizeof(m));
	memset(d, 0x7f, sizeof(d));
	d[0][0] = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		for (j = 0; j < k; j++) {
			cin >> v >> c;
			m[u][v] = c;
		}
	}
	p[0] = 1;
	for (i = 1; i < n; i++) {
		o = d[0][n - 1];
		for (j = 0; j < n; j++) {
			d[i][j] = min(d[i][j], m[q][j] + d[i - 1][q]);
			d[i][j] = min(d[i][j], d[i - 1][j]);
			if (o >= d[i][j] && p[j] == 0) {
				e = j;
				o = d[i][j];
			}
		}
		p[e] = 1;
		q = e;
	}
	for (i = 0; i < n; i++)cout << i << ' ' << d[n - 1][i] << endl;
	return 0;
}
