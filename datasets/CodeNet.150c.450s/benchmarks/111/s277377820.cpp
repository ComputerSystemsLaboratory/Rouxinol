#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int a[101][21];
	int n, i, i2, b[101];
	cin >> n;

	for (i = 0; i < n; i++){
		cin >> b[i];
	}
	for (i = 0; i < n + 1; i++){
		for (i2 = 0; i2 <= 20; i2++){
			a[i][i2] = 0;
		}
	}
	a[0][b[0]] = 1;
	for (i = 0; i < n - 2; i++){
		for (i2 = 0; i2 <= 20; i2++){
			if (a[i][i2] != 0){
				if (b[i + 1] + i2 <= 20){
					a[i + 1][b[i + 1] + i2] += a[i][i2];
				}
				if (i2 - b[i + 1] >= 0){
					a[i + 1][i2 - b[i + 1]] += a[i][i2];
				}
			}
		}


	}
	/*for (i = n - 2; i >= 0; i--){
		for (i2 = 0; i2 <= 20; i2++){
			printf("%3d", a[i][i2]);
		}
		printf("\n");
	}
	printf("\n");*/
	printf("%lld\n", a[n - 2][b[n - 1]]);
	return 0;
}