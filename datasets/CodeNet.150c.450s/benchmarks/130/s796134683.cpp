#include <iostream>
using namespace std;

int main(){
	int A[101][101],b[101],n,m,c;
	cin >> n >> m;

	for(int i=0;i<n; i++){
		for(int j=0;j<m;j++){
			cin >> A[i][j];
		}
	}


	for(int j=0;j<m;j++){
		cin >> b[j];
	}


	for(int i=0;i<n; i++){
		c=0;
		for(int j=0;j<m;j++){
			c += A[i][j]*b[j];
		}
		cout << c << "\n";
	}

	return 0;
}