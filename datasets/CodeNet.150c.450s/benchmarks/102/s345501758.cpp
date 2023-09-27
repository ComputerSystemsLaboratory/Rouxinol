
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

//マップ探索
void check(int w, int h, int x, int y, int map[20][20], int *ans){

	if(map[x][y] != 0) *ans = *ans + 1;
	if(map[x][y] == 0) return;
	map[x][y] = 0;

	if(x > 0) check(w, h, x - 1, y, map, ans);
	if(x < w - 1) check(w, h, x + 1, y, map, ans);
	if(y > 0) check(w, h, x, y - 1, map, ans);
	if(y < h - 1) check(w, h, x, y + 1, map, ans);

}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		//変数宣言
		int w, h ;
		int x, y ;

		int map[20][20];
		cin >> w >> h;

		if( w == 0 && h == 0 ) break;	//終了処理

		//マップ初期化
		for(int i = 0; i < h; i++) {
			string tmp;
			cin >> tmp;
			for(int j = 0; j < w; j++) {
				char ch = tmp.at(j);
				switch(ch) {
					case '.':
						map[j][i] = 1;
						break;
					case '#':
						map[j][i] = 0;
						break;
					case '@':
						x = j;
						y = i;
						map[j][i] = 2;
						break;
				}
			}
		}

		int ans = 0;
		check(w,h,x,y,map,&ans);

		cout << ans << endl;
	}

	
	//while(1){}
	return 0;
}