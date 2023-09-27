#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
//	FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int h, field[5][10];	//フィールドの高さ、フィールド
		int imos[5][10];
		int max[2][10];
		int fall[5][10];
		int score = 0;			//スコア
		bool flg = true;		//消去可能フラグ

		cin >> h;
		if( h == 0 ) break;

		//データ取得
		for(int i = 0; i < h; i++)
			for(int j = 0; j < 5; j++)
				cin >> field[j][i];


		while( flg ) {
			flg = false;

			for(int i = 0; i < 5; i++) {
				for(int j = 0; j < 10; j++) {
					imos[i][j] = -1;
				}
			}
			for(int i = 0; i < 2; i++) {
				for(int j = 0; j < 10; j++)
					max[i][j] = 0;
			}

			for(int i = 0; i < h; i++ ) {
				int cnt = 1;
				for(int j = 1; j < 5; j++) {
					if( field[j - 1][i] == field[j][i] ) {
						if(field[j - 1][i] > 0 && field[j][i] > 0 ) cnt ++;
					} else {
						cnt = 1;
					}
					imos[j][i] = cnt;
				}
			}


			for(int i = 0; i < h; i++) {
				for(int j = 4; j >= 0; j--) {
					if( imos[j][i] >= 3 ) {
						max[0][i] = j;
						max[1][i] = imos[j][i];
						score += field[j][i] * max[1][i];
						break;
					}
				}
			}
			
			//消去
			for(int i = 0; i < h; i++) {
				for(int j = max[0][i]; j > max[0][i] - max[1][i]; j --) {
					field[j][i] = -1;
					flg = true;
				}
			}

			//落下
			for(int i = 0; i < 5; i++) {
				int cnt = h - 1;
				for(int j = h - 1; j >= 0; j-- ) {
					if( field[i][j] > 0 ) {
						fall[i][cnt] = field[i][j]; 
						cnt --;
					}
				}
				for(int j = cnt; j >= 0; j--) {
					fall[i][j] = -1;
				}
			}

			for(int i = 0; i < 5; i++)
				for(int j = 0; j < h; j++)
					field[i][j] = fall[i][j];

		}
		
		cout << score << endl;
		

	}
	

	

//	while(1){}
    return 0;
}