#include<iostream>
using namespace std;

int H;
int W;
char orchard[100][100];

void dfs(int x, int y, char type){
	orchard [x][y] = 'f';
	
	int der[][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
	
	for(int i = 0; i <= 3; i++){
		int nx = x + der[i][0];
		int ny = y + der[i][1];
		
		if(0 <= nx && nx < H && 0 <= ny && ny < W && orchard[nx][ny] == type)
			dfs(nx, ny, type);
	}
	
	return ;
} 

int main(){
	while(cin >> H >> W){
		
		if(H == 0 && W == 0)
			return 0;
			
		int i,j;
		char type;
		int num = 0;
		
		for(i = 0; i < H ; i++){
			for(j = 0; j < W; j++){
				cin >> orchard[i][j];
			} 
		}
		
		for(i = 0; i < H; i++){
			for(j = 0; j < W; j++){
				type = orchard[i][j];
				if(type != 'f'){
					num++;
					dfs(i, j, type);
				}
			}
		}
		cout << num << endl;
	}
	
}
