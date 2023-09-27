#include <iostream>
using namespace std;

int main(void){
		int r,c;
		cin >> r >> c;
		int a[r + 1][c + 1];
		//配列初期化
		for(int i = 0;i <= r;i++){
				for(int j = 0;j <= c;j++){
						a[i][j] = 0;
				}
		}
		//配列へ入力
		for(int i = 0;i < r;i++){
				for(int j = 0;j < c;j++){
						cin >> a[i][j];
				}
		}
		//c+1列目の計算
		for(int i = 0;i < r;i++){
				for(int j = 0;j < c;j++){
						a[i][c] += a[i][j];
				}
		}
		//r+1行目の計算
		for(int i = 0;i <= c;i++){
				for(int j = 0;j < r;j++){
						a[r][i] += a[j][i];
				}
		}
		//出力
		for(int i = 0;i <= r;i++){
				for(int j = 0;j <= c;j++){
						cout << a[i][j];
						if(j != c){
								cout << " ";
						}
				}
				cout << endl;
		}
		return 0;
}