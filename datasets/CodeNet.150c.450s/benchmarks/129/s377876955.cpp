#include <iostream>
using namespace std;

int main(){
	int sheet[101][101];
	int r, c;
	int sum;
	
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		sum = 0;
		for(int j = 0; j < c; j++){
			cin >> sheet[i][j];
			sum += sheet[i][j];
		}
		sheet[i][c] = sum;
	}
	for(int i = 0; i <= c; i++){
		sum = 0;
		for(int j = 0; j < r; j++){
			sum += sheet[j][i];
		}
		sheet[r][i] = sum;
	}
	
	for(int i = 0; i <= r; i++){
		for(int j = 0; j <= c; j++){
			cout << sheet[i][j];
			if(j != c) cout << ' ';
		}
		cout << endl;
	}
	
	return 0;
}