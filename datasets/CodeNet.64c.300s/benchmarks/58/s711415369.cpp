#include <iostream>
using namespace std;

char c[100][100];
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int h, w;

void dfs(int x, int y, char fruit)
{
	c[x][y] = '.';
	
	for(int i = 0; i != 4; ++i){
		int nx = x + dx[i],
			ny = y + dy[i];
		
		if(0 <= nx && nx < h && 0 <= ny && ny < w && c[nx][ny] == fruit)
			dfs(nx, ny, fruit);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0)
			break;
		
		for(int i = 0; i != h; ++i){
			for(int j = 0; j != w; ++j){
				cin >> c[i][j];
			}
		}
		
		int res = 0;
		for(int i = 0; i != h; ++i){
			for(int j = 0; j != w; ++j){
				if(c[i][j] != '.'){
					dfs(i, j, c[i][j]);
					res++;
				}
			}
		}
		
		cout << res << endl;
	}
	return 0;
}