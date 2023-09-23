#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define INFTY (1<<21)
using namespace std;
static const int N = 100;

int main() {
	int n;
	int M[N][N];
	cin >> n;
	int u, k;
	int index;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> index;
			M[u - 1][index - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j > 0) cout << ' ';
			cout << M[i][j];
		}
		cout << "\n";
	}

}