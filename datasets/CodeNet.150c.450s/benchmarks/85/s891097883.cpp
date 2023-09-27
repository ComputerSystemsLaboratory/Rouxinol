#include<iostream>
#define MAX 99999999;
using namespace std;
int p[102];
int mcm[102][102];
int n;
int min(int x,int y) {
	int m = MAX;
	int cost = 0;
	for (int j = x; j < y; j++) {
		cost = mcm[x][j] + mcm[j + 1][y] + p[x-1]*p[j]*p[y];
		if (cost < m) {
			m = cost;
		}
	}
	return m;
}
int calMcm() {
	for (int j = 2; j <= n; j++) {
		for (int i = 1; i <= n-j+1; i++) {
			mcm[i][j+i-1] = min(i, j+i-1);
		}
	}
	return mcm[1][n];
}
int main() {
	int t;

	cin >> n;
	cin >> p[0];
	cin >> p[1];
	for (int i = 2; i <= n; i++) {
		cin >> t >> p[i];
	}

	/*for (int i = 0; i <= n; i++) {
		cout << p[i] << " ";
	}
	cout << endl;*/

	cout << calMcm() << endl;
}


