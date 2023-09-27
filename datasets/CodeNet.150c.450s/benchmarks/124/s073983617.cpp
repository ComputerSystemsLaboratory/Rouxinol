#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

const int NOTV = 0;
const int VIST = 1;
const int NMAX = 100;
const int VMAX = 2000;
const int NILL = -1;
const int INF = 1 << 21;
int a[NMAX][NMAX];  //??£??\??????
int n;
//priority_queue <greater<int>> pq;

void dijkstra(){

	int p[NMAX];
	int d[NMAX];
	int vst[NMAX];
	int minc;
	for (int i = 0; i < n; i++) {
		vst[i] = NOTV;
		d[i] = INF;
	}
	d[0] = 0;
	p[0] = -1;
	while (1) {
		minc = INF;
		int u;
		for (int i = 0; i < n; i++) {
			if (minc > d[i] && vst[i]==NOTV) {
				u = i;
				minc = d[i];
			}
		}
		if (minc == INF) break;
		vst[u] = VIST;
		for (int v = 0; v < n; v++) {
			if (vst[v] == NOTV && a[u][v] != INF) {
				if (d[u] + a[u][v] < d[v]) {
					d[v] = d[u] + a[u][v];
					vst[v] = NOTV;
				}
			}

		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << ' ' << ((d[i] == INF) ? -1 : d[i]) << endl;
	}
}

int main() {
	cin >> n;
	int um;
	int uo;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = INF;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> um;
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> uo;
			cin >> a[um][uo];
		}
		
	}
	
	dijkstra();
	return 0;
}