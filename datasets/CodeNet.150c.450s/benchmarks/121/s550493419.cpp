#include <iostream>
using namespace std;

char f[124][124];
int H, W;

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
inline bool inside(int y, int x){return 0 <= y && y < H && 0 <= x && x < W;}

void area(int y, int x)
{
	char if2 = f[y][x];
	f[y][x] = '0';
	
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i], nx = x + dx[i];
		if (inside(y, x) && f[ny][nx] != '0' && f[ny][nx] == if2){
			area(ny, nx);
		}
	}
}

int main()
{
	while (cin >> H >> W, H || W){
		int c = 0;
		for (int i = 0; i < H; i++){
			cin >> f[i];
		}
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				if (f[i][j] != '0'){
					area(i, j);
					c++;
				}
			}
		}
		cout << c << endl;
	}
	
	return 0;
}