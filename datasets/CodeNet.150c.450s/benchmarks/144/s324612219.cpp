#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m,l;
	cin >> n >> m >> l;
	vector<vector<long long>> A(n+1,vector<long long>(m+1)),B(m+1,vector<long long>(l+1)),C(n+1,vector<long long>(l+1));
	int i,j,k;
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
		for(j = 0; j < l; j++){
			C[i][j] = 0;
		}
	}	
	for(i = 0; i < n; i++){
		for(j = 0; j < l; j++){
			for(k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < l-1; j++){
			cout << C[i][j] << " ";
		}
		cout << C[i][j] << endl;
	}
	return 0;
}