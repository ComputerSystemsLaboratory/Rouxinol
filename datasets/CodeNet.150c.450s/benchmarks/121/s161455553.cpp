#include <iostream>
#include <cstdio>

using namespace std;

int H, W;

string map[1000];

bool checker[1000][1000];

void fill(int y, int x, char c){
	if(y < 0 || y >= H || x < 0 || x >= W){
		return;
	}
	if(map[y][x] == c && checker[y][x]){
		checker[y][x] = false;
		fill(y - 1, x, map[y][x]);
		fill(y + 1, x, map[y][x]);
		fill(y, x - 1, map[y][x]);
		fill(y, x + 1, map[y][x]);
	}
}

int main(){
	
	int ans;
	
	while(true){
		cin >> H >> W;
		if(H == 0 && W == 0){
			break;
		}
		for(int i = 0; i < H; i++){
			cin >> map[i];
		}
		
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				checker[i][j] = true;
			}
		}
		
		ans = 0;
		
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				if(checker[i][j]){
					ans++;
					fill(i, j, map[i][j]);
				}
			}
		}
		
		printf("%d\n", ans);
	}
	
	return 0;
}