#include <iostream>
using namespace std;
 
int main() {
	int n,m,mtA,mtb,mt;
	cin >> n >> m;
	int A[100][100];
	int b[100];
	int c[100];
	mt = 0;
 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			A[i][j] = 0;
		}
 
	}
 
	for(int k = 0; k < m; k++){
		b[k] = 0;
		c[k] = 0;
	}
 
	//??????A
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >>  A[i][j];
		}
 
	}
 
	//??????b
	for(int k = 0; k < m; k++){
		cin >>  b[k];
	}
 
	//???????¨????
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			c[i] += A[i][j]* b[j];
		}
	}
 
	//??????
	for(int i = 0; i < n; i++){
		cout << c[i] <<  endl;
	}
	return 0;
}