/*
  Official House
*/
#include<iostream>
using namespace std;
int main(){
	
	int n; //件数
	int x[4][3][10] = { { {} } };//記録

	cin >> n;

	//ここから入力、データインプットループに入る
	for (int i = 0; i < n; i++){
		int a, b, c, d;
		cin >> a >> b >> c >> d; //入力
		x[a - 1][b - 1][c - 1] += d;//データインプット
		if (x[a - 1][b - 1][c - 1] > 9){
			x[a - 1][b - 1][c - 1] = 9;
		}
		if (x[a - 1][b - 1][c - 1] < 0){
			x[a - 1][b - 1][c - 1] = 0;
		}
	}

	//ここから出力ループに入る  iは棟　kはタテ　jはヨコ
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				cout << " " << x[i][j][k];
			}
			cout << endl;
		}
		if (i == 0 || i == 1 || i == 2){
			cout << "####################" << endl;
		}
	}
	//ここでラストォ
	return 0;
}
