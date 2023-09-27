#include <bits/stdc++.h>
using namespace std;
template < typename T > std::string to_string( const T& n ){
	std::ostringstream stm ;
	stm << n ;
	return stm.str() ;
}


int main(void){
	int n,m;
	cin >> n >> m;
	int A[n][m];
	int B[m];
	int C[n];
	for(int i = 0; i < n; i++){
		C[i] = 0;
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		cin >> B[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			C[i] += A[i][j]*B[j];
		}
	}
	for(int i = 0; i < n; i++){
		cout << C[i] <<"\n";
	}
	return 0;
}
