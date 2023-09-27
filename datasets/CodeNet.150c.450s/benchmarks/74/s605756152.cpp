#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define MAX_N 50000
#define MAX_M 20
#define INF INT_MAX / 2

int C[MAX_M];
int T[MAX_N + 1];

void printv(int v[], int len) {
	for (int i = 0; i < len; i++)
		cout << v[i] << " ";
	cout << endl;
}

int getTheNumberOfCoin(int n, int m) {
	fill_n(T, n + 1, INF);
	T[0] = 0;

	for (int i = 0; i < m; i++) {
		for (int j = C[i]; j <= n; j++) {
			T[j] = min(T[j], T[j - C[i]] + 1);
		}
//		printv(T, n + 1);
	}

	return T[n];
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> C[i];
	cout << getTheNumberOfCoin(n, m) << endl;
	return 0;
}