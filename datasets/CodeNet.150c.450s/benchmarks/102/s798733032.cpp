#include <iostream>
using namespace std;

int w, h;
char tile[21][21];

const int mx[] = {0, 0, 1, -1};
const int my[] = {1, -1, 0, 0};

int func(int x, int y){
	if(x < 0 || x >= w || y < 0 || y >= h || tile[y][x] == '#'){
		return 0;
	}
	int res = 1;
	tile[y][x] = '#';
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			res += func(x + mx[i], y + my[i]);
		}
	}
	return res;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while(cin >> w >> h && w != 0 && h != 0){
	
		int sx = 0, sy = 0;
		for(int i = 0; i < h; ++i){
			for(int j = 0; j < w; ++j){
				cin >> tile[i][j];
				if(tile[i][j] == '@'){
					sy = i;
					sx = j;
				}
			}
		}
		
		cout << func(sx, sy) << endl;
	}
	
	return 0;
}