#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>

using namespace std;

int main() {
	int i, j, k, to, min, temp_result;
	int n;
	int r[100], c[100];
	int result[100][100];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> r[i] >> c[i];
		result[i][i] = 0;
	}
	
	i = 0;
	j = 1;
	to = n - 2;
	while (j <= n - 1) {
		while (i <= to) {
			//computation of result[i][i+j]
			min = INT_MAX;
			k = i;
			while (k <= i + j - 1) {
				temp_result = c[k] * r[i] * c[i + j] + result[i][k] + result[k + 1][i + j];
				if (temp_result < min) {
					min = temp_result;
				}
				k++;
			}
			result[i][i + j] = min;
			i++;
		}
		i = 0;
		j++;
		to--;
	}
	printf("%d\n", result[0][n - 1]);
}