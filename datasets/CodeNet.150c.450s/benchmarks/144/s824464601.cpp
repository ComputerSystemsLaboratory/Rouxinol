#include <bits/stdc++.h>
using namespace std;
template < typename T > std::string to_string( const T& n ){
	std::ostringstream stm ;
	stm << n ;
	return stm.str() ;
}


int main(void){
	int n,m,l;
	cin >> n>>m>>l;
	int A[n][m];
	int B[m][l];
	long long C[n][l];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < l; j++){
			cin >> B[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			long long tmp = 0;
			for(int k = 0; k < m; k++){
				tmp += A[i][k]*B[k][j];
			}
			C[i][j] = tmp;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			cout << C[i][j];
			if(j != l-1)cout << " ";
			else cout <<"\n";
		}
	}
	
	return 0;
}
