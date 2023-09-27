#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m,l;
	cin >> n >> m >> l;
	long long A[n][m];
	long long B[m][l];
	long long C[n][l];

	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			C[i][j]=0LL;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<l; j++){
			cin >> B[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			for(int k=0; k<m; k++){
				C[i][j] += (A[i][k]*B[k][j]);			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			cout << C[i][j] << ((j<l-1)? " ":"");
		}
		cout << endl;
	}
	return 0;
}