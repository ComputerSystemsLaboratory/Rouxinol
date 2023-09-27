#include <iostream>

int h, w;
bool island[51][51];

bool func(int y, int x){
	if(!island[y][x]) return false;
	island[y][x] = false;

	for(int i = -1; i <= 1; ++i){
		for(int j = -1; j <= 1; ++j){
			if(i == 0 && j == 0) continue;
			if(y + i < 0 || y + i >= h || x + j < 0 || x + j >= w) continue;
			if(!island[y + i][x + j]) continue;
			func(y + i, x + j);
		}
	}

	return true;
}

int main(){
	while(std::cin >> w >> h, h + w){
		for(int i = 0; i < h; ++i)
			for(int j = 0; j < w; ++j){
				std::cin >> island[i][j];
			}

		int cnt = 0;
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){
				cnt += func(i, j);
			}
		}

		std::cout << cnt << std::endl;
	}

	return 0;
}