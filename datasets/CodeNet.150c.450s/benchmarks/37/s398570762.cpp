#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-8;
typedef vector<double> Vec;
typedef vector<Vec> Mat;

void show(const Mat &m)
{
	puts("====");
	for (int i = 0; i < m.size(); i++){
		for (int j = 0; j < m[i].size(); j++){
			printf("%f ", m[i][j]);
		}
		puts("");
	}
	puts("====");
}

Vec gauss_jordan(const Mat &A, const Vec &b)
{
	int n = A.size();
	Mat B(n, Vec(n + 1));
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			B[i][j] = A[i][j];
		}
		B[i][n] = b[i];
	}
	
	for (int i = 0; i < n; i++){
		int pivot = i;
		for (int j = i; j < n; j++){
			if (abs(B[j][i]) > abs(B[pivot][i])){
				pivot = j;
			}
		}
		swap(B[i], B[pivot]);
		
		if (abs(B[i][i]) < EPS) return Vec();
		
		for (int j = i + 1; j <= n; j++){
			B[i][j] /= B[i][i];
		}
		for (int j = 0; j < n; j++){
			if (i != j){
				for (int k = i + 1; k <= n; k++){
					B[j][k] -= B[j][i] * B[i][k];
				}
			}
		}
		
		//show(B);
	}
	
	Vec x(n);
	for (int i = 0; i < n; i++){
		x[i] = B[i][n];
	}
	
	return x;
}

int main()
{
	while (true){
		Mat A(2, Vec(2));
		Vec b(2);
		
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < 2; j++){
				if (scanf("%lf", &A[i][j]) == EOF) return 0;
			}
			scanf("%lf", &b[i]);
		}
		
		Vec res = gauss_jordan(A, b);
		printf("%.3f %.3f\n", res[0], res[1]);
	}
	
	return 0;
}