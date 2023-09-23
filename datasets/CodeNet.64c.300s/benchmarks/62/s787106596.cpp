#include<iostream>
using namespace std;
int main(){
	int n,m;

	cin >> n >> m;

	int A[n][m],b[m];
	int con[n];

	for(int i=0; i<n; i++){
		con[i] = 0;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	for(int j=0; j<m; j++){
		cin >> b[j];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			con[i] += A[i][j]*b[j];
		}
	}

	for(int i=0; i<n; i++){
		cout << con[i] << endl;
	}

	return 0;
}