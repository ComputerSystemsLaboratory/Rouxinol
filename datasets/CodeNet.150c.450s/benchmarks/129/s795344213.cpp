#include <iostream>
using namespace std;

int main(void){
	int r,c;
	int work = 0;
	cin >> r >> c;
	int sheet[r + 1][c + 1];
	for(int i = 0; i < r + 1; i++){
		for(int j = 0; j < c + 1; j++){
			sheet[i][j] = 0;
		}
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> sheet[i][j];
		}
	}
	for(int i = 0; i < r; i++){
		work = 0;
		for(int j = 0; j < c; j++){
			work += sheet[i][j];
		}
		sheet[i][c] = work;
	}
	for(int i = 0; i < c + 1; i++){
		work = 0;
		for(int j = 0; j < r; j++){
			work += sheet[j][i];
		}
		sheet[r][i] = work;
	}
	for(int i = 0; i < r + 1; i++){
		for(int j = 0; j < c + 1; j++){
			if(j == c){
				cout << sheet[i][j] << endl;
			}else{
				cout << sheet[i][j] << " ";
			}
		}
	}
	return 0;
}