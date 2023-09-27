#include<iostream>
#include<algorithm>
using namespace std;

#define MAX_N 10000
#define INF 10000000LL

long long n, j, x[MAX_N][MAX_N], p[MAX_N + 2], sum;

int matrix() {
	for (int i = 0; i < n; i++) { x[i][i] = 0; }
	for (int h = 2; h <= n; h++) {
		for (int i = 1; i <= n - h + 1; i++) {
			j = i + h - 1;
			x[i][j] = INF;
			for (int k = i; k < j; k++) {
				x[i][j] = min(x[i][j], x[i][k] + x[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	sum = x[1][n];
	return sum;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i - 1] >> p[i];
	}
	cout << matrix() << endl;
	return 0;
}