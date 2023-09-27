
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

void chkmap(int w, int h, int x, int y, int map[50][50]) {
	if(map[x][y] == 0) return;
	map[x][y] = 0;
	if(x + 1 < w) chkmap(w,h,x+1,y,map);
	if(x > 0)	  chkmap(w,h,x-1,y,map);
	if(y + 1 < h) chkmap(w,h,x,y+1,map);
	if(y > 0)	  chkmap(w,h,x,y-1,map);
	if(x + 1 < w && y + 1 < h) chkmap(w,h,x+1,y+1,map);
	if(x + 1 < w && y > 0)	   chkmap(w,h,x+1,y-1,map);
	if(x > 0 && y + 1 < h)     chkmap(w,h,x-1,y+1,map);
	if(x > 0 && y > 0)		   chkmap(w,h,x-1,y-1,map);
}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {

		int w, h, ans = 0;
		int map[50][50];
		cin >> w >> h;

		if( w == 0 && h == 0 ) break;	//終了処理

		//マップ読み取り
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j ++) {
				int tmp;
				cin >> tmp;
				map[j][i] = tmp;
			}
		}


		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				if(map[j][i] == 1) ans ++;
				chkmap(w,h,j,i,map);
			}
		}

		cout << ans << endl;
	}

	
	//while(1){}
	return 0;
}