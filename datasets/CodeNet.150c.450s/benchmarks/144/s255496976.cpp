#include <iostream>
using namespace std;

int main(void){
		int n,m,l;
		cin >> n >> m >> l;
		int a[n][m];
		int b[m][l];
		long long c[n][l];

		for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
						a[i][j] = 0;
				}
		}
		for(int i = 0;i < m;i++){
				for(int j = 0;j < l;j++){
						b[i][j] = 0;
				}
		}
		for(int i = 0;i < n;i++){
				for(int j = 0;j < l;j++){
						c[i][j] = 0;
				}
		}
		//配列へ入力
		
		for(int i = 0;i < n;i++){
				for(int j = 0;j < m;j++){
						cin >> a[i][j];
				}
		}
		for(int i = 0;i < m;i++){
				for(int j = 0;j < l;j++){
				cin >> b[i][j];
				}
		}
		//計算、出力
		for(int i = 0;i < n;i++){
				for(int j = 0;j < l;j++){
						for(int k = 0;k < m;k++){
								c[i][j] += a[i][k] * b[k][j];
						}
						cout << c[i][j] ;
						if( j != l-1){
								cout << " ";
					    }	
				}
				cout << endl;
		}
		return 0;
}