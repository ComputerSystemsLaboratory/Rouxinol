#include<iostream>
using namespace std;

int main(){

	int r, c;
	int num[101][101] = {0} ;

	cin >> r >> c;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> num[i][j];
			//横軸の合計値の計算
			num[i][c] += num[i][j];
			//縦軸の合計値の計算
			num[r][j] += num[i][j];
		}
		//縦横の合計の値の計算
		num[r][c] += num[i][c];
	}

	for(int i = 0; i <= r; i++){
		for(int j = 0; j <= c; j++){
			cout << num[i][j] << " \n"[j == c];
		}
	}

	

	return 0;
}
