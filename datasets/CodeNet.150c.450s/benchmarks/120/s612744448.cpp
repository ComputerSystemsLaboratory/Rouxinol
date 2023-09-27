#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int R, C;
int A[10][10000];
int ans;
int B[10];
int D[10000];
int main()
{
	while (true){
		ans = 100000;
		scanf("%d%d", &R, &C);
		if (R == 0 && C == 0)break;
		for (int i = 0; i < R; i++){
			for (int j = 0; j < C; j++){
				scanf("%d", &A[i][j]);
			}
		}
		for (int i = 0; i < (1 << R); i++){
			int SS = 0;
			for (int j = 0; j < R; j++){
				B[j] = (i >> j) & 1;
			}
			for (int j = 0; j < R; j++){
				if (B[j] == 1){
					for (int k = 0; k < C; k++){
						if (A[j][k] == 1)A[j][k] = 0;
						else A[j][k] = 1;
					}
				}
			}
			for (int k = 0; k < C; k++){
				int sum = 0;
				for (int j = 0; j < R; j++)sum += A[j][k];
				SS += min(sum, R - sum);
			}
			for (int j = 0; j < R; j++){
				if (B[j] == 1){
					for (int k = 0; k < C; k++){
						if (A[j][k] == 1)A[j][k] = 0;
						else A[j][k] = 1;
					}
				}
			}
			ans = min(ans, SS);
		}
		printf("%d\n", R*C - ans);
	}
	return 0;
}