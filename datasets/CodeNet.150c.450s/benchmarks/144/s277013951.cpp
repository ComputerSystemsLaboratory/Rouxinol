#include <iostream>
#include <valarray>
#include <cmath>
#include <algorithm>

using namespace std;

typedef valarray<long long> array_t;

valarray<array_t> multiply(valarray<array_t> &A, valarray<array_t> &B){
	valarray<array_t> C(array_t((long long)0,B[0].size()),A.size());
	if(A[0].size() != B.size()) return C;
	for(int i = 0; i < A.size(); i++){
		for(int j = 0; j < B[0].size(); j++){
			for(int k = 0; k < A[0].size(); k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return C;
}

int main(){
	int n,m,l;
	cin >> n >> m >> l;
	valarray<array_t> A(array_t((long long)0,m),n);
	valarray<array_t> B(array_t((long long)0,l),m);
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

	valarray<array_t> C = multiply(A,B);

	for(int i = 0; i < C.size(); i++){
		for(int j = 0; j < C[0].size(); j++){
			cout << C[i][j];
			if(j == C[0].size() - 1) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}