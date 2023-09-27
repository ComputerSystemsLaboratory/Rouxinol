#include <iostream>
#include <valarray>
#include <cmath>
#include <algorithm>

using namespace std;

typedef valarray<int> array_t;

array_t multiply(valarray<array_t> &A, array_t &b){
	array_t c(0,A.size());
	if(A[0].size() != b.size()) return c;
	for(int i = 0; i < A.size(); i++){
		for(int j = 0; j < A[0].size(); j++){
			c[i] += A[i][j] * b[j];
		}
	}
	return c;
}

int main(){
	int n,m;
	cin >> n >> m;
	valarray<array_t> A(array_t(0,m),n);
	array_t b(0,m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++) cin >> b[i];
	array_t c = multiply(A,b);
	for(int i = 0; i < c.size(); i++){
		cout << c[i] << endl;
	}
	return 0;
}