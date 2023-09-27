#include <iostream>

#define MAX_HW 100

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int h, w, ans;
char field[MAX_HW][MAX_HW];

void solve();

void dfs(int H, int W);

int main(){
	while(true){
		std::cin >> h >> w;
		if(h == 0 && w == 0)
			break;
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){
				std::cin >> field[i][j];
			}
		}
		solve();
		std::cout << ans << std::endl;
	}
	return 0;
}

void solve(){
	ans = 0;
	for(int i = 0; i < h; ++i){
		for(int j = 0; j < w; ++j){
			if(field[i][j] != '.'){
				dfs(i, j);
				++ans;
			}
		}
	}
	return;
}

void dfs(int H, int W){
	char tmp = field[H][W];
	field[H][W] = '.';

	for(int i = 0; i < 4; ++i){
		int nh = H + dx[i], nw = W + dy[i];

		if(nh >= 0 && nw >= 0 && nh < h && nw < w && tmp == field[nh][nw]) dfs(nh, nw); 
	}
	return;
}