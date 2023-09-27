#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	long long int A[n][m], B[m][l];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++){
			cin >> B[i][j];
		}
	}

	long long int C[n][l];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			long long int tmp = 0;
			for (int k = 0; k < m; k++){
				tmp += A[i][k] * B[k][j];
			}
			C[i][j] = tmp;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			if (j < l-1) cout << C[i][j] << " ";
			else cout << C[i][j];
		}
		cout << endl;
	}
}
