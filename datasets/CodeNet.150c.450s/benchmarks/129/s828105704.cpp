#include<iostream>
using namespace std;

int main(){
	int r, c, A[101][101] = {0};
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> A[i][j];
			A[i][c] += A[i][j];
		}
	}
	for(int j = 0; j <= c; j++){
		for(int i = 0; i < r; i++){
			A[r][j] += A[i][j];
		}
	}
	for(int i = 0; i <= r; i++){
		for(int j = 0; j < c; j++){
			cout << A[i][j] << ' ';
		}
		cout << A[i][c] << endl;
	}	
	return 0;
}