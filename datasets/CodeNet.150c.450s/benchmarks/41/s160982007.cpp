#include<iostream>
#include<algorithm>

using namespace std;

static const int MAXV = 101;
static const long long INF = 1LL << 32;

int v, e;
long long A[MAXV][MAXV];

int main() {
	int i, j, k, s, t, d;
	
	cin >> v >> e;

	//initWarshallFloyd
	for (i = 0; i < v; i++) {
		for (j = 0; j < v; j++) {
			A[i][j] = INF;
		}
		A[i][i] = 0;
	}

	//make A^0[i][j]
	for (i = 0; i < e; i++) {
		cin >> s >> t >> d;
		A[s][t] = d;
	}

	//warshallFloyd
	for (k = 0; k < v; k++) {
		for (i = 0; i < v; i++) {
			if (A[i][k] == INF)continue;
			for (j = 0; j < v; j++) {
				if (A[k][j] == INF)continue;
				A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
			}
		}
	}

	//check
	for (i = 0; i < v; i++) {
		if (A[i][i] < 0) {
				cout << "NEGATIVE CYCLE" << endl;
				return 0;
		}
	}

	//print
	for (i = 0; i < v; i++) {
		for (j = 0; j < v - 1; j++) {
			if (A[i][j] == INF)cout << "INF ";
			else cout << A[i][j] << " ";
		}
		if (A[i][j] == INF)cout << "INF" << endl;
		else cout << A[i][v - 1] << endl;
	}

	return 0;
}