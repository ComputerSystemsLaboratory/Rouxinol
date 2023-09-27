#include<iostream>
using namespace std;
int main(){
	int n,m,l;

	cin >> n >> m >> l;

	int A[n][m],B[m][l];
	long con[n][l];

	for(int i=0; i<n; i++){
		for(int k=0; k<l; k++){
			con[i][k] = 0;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	for(int j=0; j<m; j++){
		for(int k=0; k<l; k++){
			cin >> B[j][k];
		}
	}

	for(int i=0; i<n; i++){
		for(int k=0; k<l; k++){
			for(int j=0; j<m; j++){
				con[i][k] += A[i][j]*B[j][k];
			}

		}
	}

	for(int i=0; i<n; i++){
		for(int k=0; k<l; k++){
			if(k>0) cout << " ";
			cout << con[i][k];
		}

		cout << endl;
	}

	return 0;
}