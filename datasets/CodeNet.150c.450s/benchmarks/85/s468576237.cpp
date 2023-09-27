#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int num = 105;
int p[num];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &p[i-1], &p[i]);
	}
	int m[num][num];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			m[i][j] = 2000000000;
		}
	}
	for (int i = 1; i <= n; i++) m[i][i] = 0;
	for (int l = 1; l < n; l++) {
		for (int i = 1; i < n - l + 1; i++) {
			int j = i + l;
			for (int k = i; k < j; k++)
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
		}
	}
	cout << m[1][n] << endl;
	return 0;
}