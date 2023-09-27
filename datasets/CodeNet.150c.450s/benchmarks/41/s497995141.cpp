#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include "MyMath.h"
//#include "MyDisjointset.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#include <stdio.h>
using namespace std;
typedef pair<int, int> P;
const int INF = 2000000000;
int main() {
	int v, e; cin >> v >> e;
	int m[101][101];
	fill(m[0], m[v], INF);
	for (int i = 0; i < e; i++) {
		int s, t, c; cin >> s >> t >> c;
		m[s][t] = c;
	}
	for (int i = 0; i < v; i++) m[i][i] = 0;
	for (int k = 0; k < v; k++)for (int i = 0; i < v; i++) {
		if (m[i][k] == INF) continue;
		for (int j = 0; j < v; j++) {
			if (m[k][j] == INF) continue;
			m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
		}
	}
	for (int i = 0; i < v; i++) if (m[i][i] < 0) {
		cout << "NEGATIVE CYCLE" << endl; return 0;
	}
	for (int i = 0; i < v; i++)for (int j = 0; j < v; j++) {
		if (m[i][j] == INF) cout << "INF";
		else cout << m[i][j];
		if (j == v - 1) cout << endl;
		else cout << " ";
	}
	return 0;
}