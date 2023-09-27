
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int N, M, num = 0;
		int x = 10, y = 10;	//ロボットの現在座標
		int jewels[21][21];	//宝石の座標

		cin >> N;	//宝石の個数を取得する

		if( N == 0 ) break;	//終了処理

		//配列変数の初期化
		for(int i = 0; i < 21; i++)
			for(int j = 0; j < 21; j++)
				jewels[i][j] = 0;

		//宝石の座標を取得する
		for(int i = 0; i < N; i++) {
			int _x, _y;
			cin >> _x >> _y;
			jewels[_x][_y] ++;
		}

		cin >> M;	//命令の数を取得する
		for(int i = 0; i < M; i++) {
			int vx = 0, vy = 0;
			char d_j;
			int l_j;
			cin >> d_j >> l_j;

			//移動方向による場合分け
			switch(d_j) {
				case 'N':
					vy = 1;
					break;
				case 'E':
					vx = 1;
					break;
				case 'S':
					vy = -1;
					break;
				case 'W':
					vx = -1;
					break;
			}

			
			//移動を行う
			for(int j = 0; j < l_j; j ++) {
				x += vx;
				y += vy;
				if(jewels[x][y] > 0) {
					num ++;
					jewels[x][y] = 0;
				}
			}

		}

		if(num == N) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}

	}

	//while(1){}
	return 0;
}