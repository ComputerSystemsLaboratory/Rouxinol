#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int INF = 2000000000;
int d[100][100];
int main() {
	int n, e;
	cin >> n >> e;
	fill(d[0], d[100], INF);
	for (int i = 0; i < n; i++)
		d[i][i] = 0;
	for (int i = 0; i < e; i++) {
		int s, t, dis; cin >> s >> t >> dis;
		d[s][t] = dis; 
	}
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++) {
			if (d[i][k] == INF) continue;
			for (int j = 0; j < n; j++) {
				if (d[k][j] == INF) continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	for (int i = 0; i < n; i++)
		if (d[i][i] < 0) { puts("NEGATIVE CYCLE"); return 0; }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0) cout << " ";
			if(d[i][j] < INF)cout << d[i][j];
			else cout << "INF";
		}
		cout << endl;
	}
	return 0;
}