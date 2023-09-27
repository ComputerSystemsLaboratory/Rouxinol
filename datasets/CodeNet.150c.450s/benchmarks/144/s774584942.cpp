#include <iostream>
using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	int A[100][100], B[100][100];
	long long int C[1000][1000];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	for(int a=0; a<m; a++){
		for(int b=0; b<l; b++){
			cin >> B[a][b];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			for(int k=0; k<m; k++){
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	for(int c=0; c<n; c++){
		for(int d=0; d<l-1; d++){
			cout << C[c][d] << " ";
		}
		cout << C[c][l-1] << endl;
	}
	return 0;
}
