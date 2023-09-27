#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define FOR(a,b) for(int a=0;a<b;a++)
using namespace std;
using ll=long long;
static const int MAX = 100;
static const ll INF = (1LL << 32);
int n;
ll d[MAX][MAX];

void floyd() {
	FOR(k, n) {
		FOR(i, n) {
			if (d[i][k] == INF) continue;
			FOR(j, n) {
				if (d[k][j] == INF) continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main() {
	int e, s, t, w;
	cin >> n >> e;
	FOR(i, n) {
		FOR(j, n) {
			d[i][j] = (i == j) ? 0 : INF;
		}
	}
	FOR(i, e) {
		cin >> s >> t >> w;
		d[s][t] = w;
	}
	floyd();
	bool neg;
	FOR(i, n) {
		if (d[i][i] < 0) {
			neg = 1;
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	FOR(i, n) {
		FOR(j, n) {
			if (j > 0) cout << ' ';
			if (d[i][j] == INF) cout << "INF";
			else cout << d[i][j];
		}
		cout << endl;
	}
}