#include <iostream>

using namespace std;

int H, W;
char map[105][105];

void dfs(int x, int y, char c)
{
	if(x < 0 || x >= W || y < 0 | y >= H) return;
	if(map[x][y] != c) return;
	
	map[x][y] = '.';
	
	dfs(x-1, y, c);
	dfs(x+1, y, c);
	dfs(x, y-1, c);
	dfs(x, y+1, c);
}

int main(void)
{
	while(1){
		cin >> H >> W;
		if(H == 0 && W == 0) break;
		
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				cin >> map[x][y];
			}
		}
		
		int ans = 0;
		for(int x = 0; x < W; x++){
			for(int y = 0; y < H; y++){
				if(map[x][y] != '.'){
					dfs(x, y, map[x][y]);
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}