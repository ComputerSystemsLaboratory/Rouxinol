#include <iostream>

using namespace std;

int main(){
	int i, j, k, n, m, l;
	cin >> n >> m >> l;
	int A[n][m], B[m][l];

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}

	for(i = 0; i < m; i++){
		for(j = 0; j < l; j++){
			cin >> B[i][j];
		}
	}

	for(i = 0; i < n; i++){
		long sum;
		for(j = 0; j < l; j++){
			sum = 0;
			for(k = 0; k < m; k++){
				sum += A[i][k] * B[k][j];
			}
			if(j == l-1) break;
			cout << sum << ' ';
		}
		cout << sum << endl;
	}
}