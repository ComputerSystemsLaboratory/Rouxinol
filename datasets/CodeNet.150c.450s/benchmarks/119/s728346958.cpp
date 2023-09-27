#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool passed[50][50];
char field[50][50];


const int dy[]={-1,0,0,1,1,-1,1,-1};
const int dx[]={0,-1,1,0,1,-1,-1,1};
int w,h;

void dfs(int y,int x){
	if(passed[y][x])
		return;
	passed[y][x] = true;
	for(int i = 0; i < 8; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny >= 0 && nx >= 0 && ny < h && nx < w && !passed[ny][nx] && field[ny][nx] != '0'){
			dfs(ny,nx);
		}
	}
}

int main(){

	while(cin >> w >> h && !(w == 0 && h == 0)){
		for(int i = 0; i < h; i++){
			fill(passed[i],passed[i]+w,false);
			for(int j = 0; j < w; j++){
				cin >> field[i][j];
			}
		}
		int cnt = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(field[i][j] == '0' || passed[i][j]){
					continue;
				}
				else{
					cnt++;
					dfs(i,j);
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}