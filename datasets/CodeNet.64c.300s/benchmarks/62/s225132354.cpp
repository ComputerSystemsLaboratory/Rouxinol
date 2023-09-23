#include <iostream>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)

int main(){
	int n, m, A[100][100], b[100], c[100]={};

	cin >> n >> m;

	rep(i,n)
	rep(j,m){
		cin >> A[i][j];
	}

	rep(i,m)
	cin >> b[i];

	rep(i,n)
	rep(j,m){
		c[i] += A[i][j]*b[j];
	}

	rep(i,n)
	cout << c[i] << "\n";

	return 0;

}