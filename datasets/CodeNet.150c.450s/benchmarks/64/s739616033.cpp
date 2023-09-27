#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int n, A[30];

int solve( int i, int m){
	if( m == 0 ) return 1;
	if( i >= n ) return 0;
	int res = solve( i + 1, m ) || solve( i + 1, m - A[i] );
	return res;
}

int main(){
	int q;
	int M[210];

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	cin >> q;
	for(int j = 0; j < q; j++){
		cin >> M[j];
	}
	for(int j = 0; j < q; j++){
		if( solve(0, M[j]) ) cout << "yes" << endl;
		else{ cout << "no" << endl;}
	}
	return 0;
}