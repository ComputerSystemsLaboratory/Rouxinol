#include<iostream>
#include<cstdio>

#define N 2

using namespace std;

int main(){
	double a[N][N+1];
	double d;
	int i, j, k;
	bool flag = 1;

	while(cin >> a[0][0] >> a[0][1] >> a[0][2] >> a[1][0] >> a[1][1] >> a[1][2]){
		for(k = 0; k < N - 1; k++){
			for(i = k+1; i < N; i++){
				d = a[i][k] / a[k][k];
				for(j = k + 1; j <= N; j++){
					a[i][j] = a[i][j] - a[k][j] * d;
				}
			}
		}
		for(i = N - 1; i >= 0; i--){
			d = a[i][N];
			for(j = i + 1; j < N; j++){
				d = d - a[i][j] * a[j][N];
			}
			a[i][N] = d / a[i][i];
		}
		printf("%.3f %.3f\n", a[0][N], a[1][N]);
	}
	return 0;
}