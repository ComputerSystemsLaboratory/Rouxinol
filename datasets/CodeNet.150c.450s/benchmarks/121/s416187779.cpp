#include <cstdio>
using namespace std;

int H, W;
char field[110][110];
bool checked[100][100];

void dfs(int y, int x, char ch){
	if(checked[y][x]) return;
	
	checked[y][x] = true;
	
	if(x > 0 && field[y][x - 1] == ch) dfs(y, x - 1, ch);
	if(y > 0 && field[y - 1][x] == ch) dfs(y - 1, x, ch);
	if(x + 1 < W && field[y][x + 1] == ch) dfs(y, x + 1, ch);
	if(y + 1 < H && field[y + 1][x] == ch) dfs(y + 1, x, ch);
}

int main(){
	int res;
	
	while(true){
		scanf("%d%d", &H, &W);
		if(H == 0 && W == 0) return 0;
		
		for(int i = 0; i < H; i++) scanf("%s", field[i]);
		
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				checked[y][x] = false;
			}
		}
		
		res = 0;
		for(int y = 0; y < H; y++){
			for(int x = 0; x < W; x++){
				if(checked[y][x]) continue;
				
				dfs(y, x, field[y][x]);
				res++;
			}
		}
		
		printf("%d\n", res);
	}
}