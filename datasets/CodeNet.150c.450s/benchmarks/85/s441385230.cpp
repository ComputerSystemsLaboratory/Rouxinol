#include <iostream>
#include <algorithm>
using namespace std;

#define INFTY (1<<21)
#define MAX_N 100

int m[MAX_N + 1][MAX_N + 1], p[MAX_N + 1];
int n;

void matrixChainMultiplication(){
	for( int i = 1; i <= n; i++ ){
		m[i][i] = 0;
	}

	for( int l = 2; l <= n; l++ ){
		for( int i = 1; i <= n - l + 1; i++ ){
			int j = i + l - 1;
			m[i][j] = INFTY;
			for( int k = i; k < j; k++ ){
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
}

int main(void){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> p[i - 1] >> p[i];
	}

	matrixChainMultiplication();

	cout << m[1][n] << endl;

	return 0;
}