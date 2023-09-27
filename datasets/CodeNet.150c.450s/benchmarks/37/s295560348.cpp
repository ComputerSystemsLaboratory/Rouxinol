#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	
	// 係数行列
	double A[2][2];
	
	// 定数ベクトル
	double  B[2];
	
	// 解ベクトル
	double x[2];
	
	
	double a, b, c, d, e, f;
	// 入力の最後まで処理する
	while(cin >> a >> b >> c >> d >> e >> f){
	A[0][0] = a;
	A[0][1] = b;
	A[1][0] = d;
	A[1][1] = e;
	
	B[0] = c;
	B[1] = f;
	
	
	
	int i,j,k;
	double tmp;
	
	// 前進消去
	for(i=0;i<1;i++){
		for(j=i+1;j<2;j++){
			for(k=i+1;k<2;k++){
				A[j][k] = A[j][k] - (A[j][i]/A[i][i])*A[i][k];
			}
			B[j] = B[j] - (A[j][i]/A[i][i])*B[i];
		}
	}
	
	// 後退代入
	for(i=1;i>=0;i--){
		tmp = B[i];
		for(j=i+1;j<2;j++){
			tmp = tmp - A[i][j]*x[j];
		}
		x[i] = tmp/A[i][i];
	}
	
	printf("%.3f %.3f\n", x[0], x[1]);
	
	}
	
	return 0;
}