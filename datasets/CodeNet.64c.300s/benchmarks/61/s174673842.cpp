#include<iostream>
using namespace std;

int main(){
	int r, c;
	int a[101][101];
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++) cin >> a[i][j];
	}
	for(int i = 0; i < r+1; i++) a[i][c] = 0;
	for(int j = 0; j < c+1; j++) a[r][j] = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
			a[r][c] += a[i][j];
		}
	}
	for(int i = 0; i < r+1; i++){
		cout << a[i][0];
		for(int j = 1; j < c+1; j++){
			cout << " " << a[i][j];
		}
		cout << endl;
	}

	return 0;
}