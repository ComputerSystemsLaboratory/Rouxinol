#include<iostream>
using namespace std;
int main(){
	int r, c, a[150][150] = {}, i, j,N=0,S=0,M=0;
	cin >> r >> c;
	for (i = 1; i <=r ; i++){
		for (j = 1; j <= c; j++){
			cin >> a[i][j];
		}
	}
	for (i = 1; i <= r; i++){
		N = 0;
		for (j = 1; j <= c; j++){
			cout << a[i][j] << " ";
			N = N + a[i][j];
		}
		cout << N << endl;
	}
	for (j = 1; j <= c+1; j++){
		S = 0;
		for (i = 1; i <= r; i++){
			S = S + a[i][j];
		}
		if (j == c + 1){
			cout << M << endl;
			break;
		}
		cout << S << " ";
		M = M + S;
	}

	return 0;
}