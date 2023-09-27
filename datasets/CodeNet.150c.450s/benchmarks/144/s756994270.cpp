#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n, m, l;
	cin >> n >> m >> l;
	vector< vector<long> > A(n);
	for (long i = 0; i < n; i++){
		A[i].resize(m);
	}
	for (long i = 0; i < n; i++){
		for (long j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	vector< vector<long> > B(m);
	for (long i = 0; i < m; i++){
		B[i].resize(l);
	}
	for (long i = 0; i < m; i++){
		for (long j = 0; j < l; j++){
			cin >> B[i][j];
		}
	}
	vector< vector<long> > C(n);
	for (long i = 0; i < n; i++){
		C[i].resize(l);
	}
	for (long i = 0; i < n; i++){
		for (long j = 0; j < l; j++){
			C[i][j] = 0;
			for (long k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for (long i = 0; i < n; i++){
		for (long j = 0; j < l; j++){
			if (j < l - 1) cout << C[i][j] << " ";
			else cout << C[i][j] << endl;
		}
	}
	return 0;
}