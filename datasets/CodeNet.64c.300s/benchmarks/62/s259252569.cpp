#include <iostream>
using namespace std;

int main(void){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		int b[m];
		int c[n];
		for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
						a[i][j] = 0;
					b[j] = 0;
				}
				c[i] = 0;
		}
		//配列へ入力
		
		for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
						cin >> a[i][j];
				}
		}
		for(int i = 0;i < m;i++){
				cin >> b[i];
		}
		//計算、出力
		for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
						c[i] += a[i][j] * b[j];
				}
				cout << c[i] << endl;
		}
		return 0;
}
				
		