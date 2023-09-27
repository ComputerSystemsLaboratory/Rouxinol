#include<iostream>
#include <cstdio>
using namespace std;

const int n_MAX = 100;
const int m_MAX = 100;
int A[n_MAX][m_MAX];
int B[m_MAX];

int main(){
	int n, m;
	cin >> n >> m;

	for (int N = 0; N < n; N++){
		for (int M = 0; M < m; M++){
			cin >> A[N][M];
		}
	}
	for (int M = 0; M < m; M++){
		cin >> B[M];
	}

	for (int i = 0; i < n; i++){
		int c = 0;
		for (int j = 0; j < m; j++){
			c += A[i][j] * B[j];
		}
		cout << c << endl;
	}

	return 0;
}
