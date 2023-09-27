#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

int main() {
	
	int n, m, l;
	int a[100][100];
	int b[100][100];

	cin >> n >> m >> l;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	long sum;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			sum = 0;
			for (int k = 0; k < m; k++) {
				sum += (a[i][k] * b[k][j]);

			}
			printf("%lu", sum);
			if (j + 1 != l)printf(" ");

		}
		printf("\n");
	}

	//system("pause");
	return 0;
}
