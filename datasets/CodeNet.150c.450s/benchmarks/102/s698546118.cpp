#include <cstdio>
using namespace std;

int W, H;
const int SIZE = 20;
char f[SIZE + 1][SIZE + 1];
bool c[SIZE][SIZE];

int dfs(int x, int y){
	if(x < 0 || y < 0 || x >= W || y >= H) return 0;
	if(c[y][x] || f[y][x] == '#') return 0;
	c[y][x] = true;
	
	return 1 + dfs(x + 1, y) + dfs(x, y + 1) + dfs(x - 1, y) + dfs(x, y - 1);
}

int main(){
	int sx, sy;
	
	while(true){
		scanf("%d%d", &W, &H);
		if(H == 0 && W == 0) break;
		for(int i = 0; i < H; i++){
			scanf("%s", f[i]);
		}
		
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				c[y][x] = false;
				if(f[y][x] == '@'){
					sx = x; sy = y;
				}
			}
		}
		
		printf("%d\n", dfs(sx, sy));
	}
	
	return 0;
}