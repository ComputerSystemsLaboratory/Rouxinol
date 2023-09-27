#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

#define REP(i,n) for(int i=0;(i)<(n);(i)++)
#define ll long long

static const int INFTY = (1<<21);

int n, M[100][100];

void BFS(void) {
	queue<int> Q;
	int d[100];
	REP(i, n) d[i] = INFTY;
	d[0] = 0;

	Q.push(0);//?§???????0

	int u;
	while (!Q.empty()) {
		u = Q.front(); Q.pop();
		REP(i, n) {
			if (M[u][i]) {
				if (d[i] == INFTY) {
					d[i] = d[u] + 1;
					Q.push(i);
				}
			}
		}
	}

	REP(i, n) {
		cout << i + 1 << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
	}
}

int main() {
	cin >> n;

	REP(i, n) {
		REP(j, n) M[i][j] = 0;
	}

	int u, k, v;
	REP(i, n) {
		cin >> u >> k;
		REP(j, k) {
			cin >> v;
			M[u - 1][v - 1] = 1;//0-origin
		}
	}

	BFS();

	return 0;
}