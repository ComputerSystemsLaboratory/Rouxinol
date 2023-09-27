#include <bits/stdc++.h>

using namespace std;

#define llong long long 
int w,h;
int sum;
int area[50][50];
int nw[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int nh[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void solve(int H, int W){
	if(area[H][W] == 0)return;
	area[H][W] = 0;
	for(int i = 0; i < 8; i++){
		int sh = H + nh[i];
		int sw = W + nw[i];
		if(sh < 0 || sw < 0 || sh >= h || sw >= w) continue;
		solve(sh, sw);
	}

	return;
}

int main(){

	while(cin >> w >> h, w){
		sum = 0;
		fill_n(*area, 50 * 50, 0);
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> area[i][j];
			}
		}	

		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(area[i][j] == 1){
					sum++;
					solve(i, j);
				}
			}
		}

		cout << sum << endl;
	}
	return 0;
}