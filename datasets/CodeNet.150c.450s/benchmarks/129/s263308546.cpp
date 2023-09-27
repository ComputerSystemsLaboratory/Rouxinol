#include <iostream>
using namespace std;
 
int main() {
	int row,col;
	cin >> row >> col;
	int mtx[101][101];
	mtx[row][col] = 0;
 
	//????????????????´?
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			mtx[i][col] = 0;
			mtx[row][j] = 0;
			cin >> mtx[i][j];
		}
	}
 
	//??????????????????
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			mtx[i][col] += mtx[i][j];
			mtx[row][j] += mtx[i][j];
 
		}
		mtx[row][col] += mtx[i][col];
	}
 
	int c;
 
	for(int i = 0; i <= row; i++){
 
		for(int j = 0; j <= col; j++){
			if(j)cout << " ";
			cout << mtx[i][j] ;
		}
		cout << endl;
	}
	return 0;
}