#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define N_MAX 1000

using namespace std;

int main()
{
	int N, W;
	int v[100], w[100], C[101][10005];

	cin >> N >>W;

	for (int i = 1; i <= N; i++) {
		cin >> v[i] >> w[i];
	}

	for (int i = 0; i <= W; i++) C[0][i] = 0;
	for (int i = 1; i <= N; i++) C[i][0] = 0;
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i] <= j) {
				if (v[i] + C[i - 1][j - w[i]] > C[i - 1][j]) {
					C[i][j] = v[i] + C[i - 1][j - w[i]];
				} else {
					C[i][j] = C[i - 1][j];
				}
			} else {
				C[i][j] = C[i - 1][j];
			}
		}
	}
	cout << C[N][W] << endl;
	return (0);
}