#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int w, h, ans;
int d[4][2] = { { 1, 0 }, { -1, 0 }, {0, 1}, {0, -1} };
char map[20][20];

void search_dfs(int x, int y){
	if( x < 0 || x >= w || y < 0 || y >= h ) return;
	if( map[y][x] != '.' ) return;
	ans ++;
	map[y][x] = '*';
	for(int i = 0; i < 4; i++)
		search_dfs( x + d[i][0], y + d[i][1] );
}

int main(void){

	while( 1 ) {
		cin >> w >> h;
		if( w == 0 && h == 0 ) break;
		ans = 0;

		for(int i = 0; i < h; i++)
			cin >> map[i];

		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++)
				if( map[i][j] == '@' ) {
					map[i][j] = '.';
					search_dfs(j, i);
				}

		cout << ans << endl;
	}

	return 0;
}