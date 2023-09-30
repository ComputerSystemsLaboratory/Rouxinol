#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

#define MAX 256

int main(void){
	
	int n, m, l;

	scanf("%d%d%d", &n, &m, &l);
	
	long a[n][m];
	long b[m][l];
	long c[n][l];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			a[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++){
			b[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			c[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%ld", &a[i][j]);
		}
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++){
			scanf("%ld", &b[i][j]);
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			for (int k = 0; k < m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
			if (j != l - 1)printf("%ld ", c[i][j]);
		}
		printf("%ld\n", c[i][l - 1]);
	}

	return 0;
}