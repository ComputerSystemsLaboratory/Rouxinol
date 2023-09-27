#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n, m, a, b, c, _end;
int x[10][10];

int bfs(int p, int a) {
	int s[10], minx = 114514, sum;
	sum = 0;
	memset(s, 127, sizeof(s));
	s[a] = 0;
	for (int l = 0; l < p; l++) {
		for (int o = 0; o < p; o++) {
			if (s[o] < 114514) {
				for (int q = 0; q < p; q++) {
					if (x[o][q] < 114514) {
						s[q] = min(s[q], s[o] + x[o][q]);
					}
				}
			}
		}
	}
	for (int l = 0; l < p; l++) {
		sum += s[l];
	}
	minx = min(minx, sum);
	return minx;
}

int search(int p) {
	int t[10], maxn = 114514, maxid;
	for (int k = 0; k < p; k++) {
		t[k] = bfs(p, k);
	}
	for (int k = 0; k < p; k++) {
		if (maxn > t[k]) {
			maxn = t[k];
			maxid = k;
		}
	}
	return maxn * 100 + maxid;
}

void _cin() {
	memset(x, 51, sizeof(x));
	n = 0;
	_end = 0;
	cin >> m;
	if (m == 0) { _end = 1; return; }
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		n = max(n, max(a, b));
		x[a][b] = c;
		x[b][a] = c;
	}
	n += 1;
}

int main() {
	while (true) {
		_cin();
		if (_end == 1) { break; }
		cout << search(n) % 100 << ' ' << search(n) / 100 << endl;
	}
}