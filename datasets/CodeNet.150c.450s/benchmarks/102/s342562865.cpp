#include <iostream>

using namespace std;

int w, h;
char tile[21][21];

int dx[] = {-1, 0, 0, 1};
int dy[] = { 0,-1, 1, 0};

int dfs(int x, int y){
	if(x<0 || w<=x || y<0 || h<=y) return 0;
	if(tile[y][x] == '#') return 0;

	tile[y][x] = '#';
	int count = 1;
	for(int i=0; i<4; i++){
		count += dfs(x+dx[i], y+dy[i]);
	}
	return count;
}


int main(void){
	while(1){
		cin >> w >> h;
		if(!w && !h) break;

		int x=0, y=0; //pos
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin >> tile[i][j];
				if(tile[i][j] == '@'){
					x = j;
					y = i;
				}
			}
		}
		cout << dfs(x, y) << endl;
	}
	return 0;
}
