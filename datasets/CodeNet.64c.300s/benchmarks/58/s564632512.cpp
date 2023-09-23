#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100
using namespace std;

int H,W;
//grid[0][i],grid[MAX+1][i],grid[i][0],grid[i][MAX+1]は番兵
char grid[MAX+3][MAX+3];

void dfs(int row,int column,char mark){
	if(grid[row][column] == mark){
		grid[row][column] = 'x';
		for(int i=-1;i <= 1;i++){
			if(i == 0)continue;
			else dfs(row+i,column,mark);//南北
		}
		for(int j = -1;j <= 1;j++){
			if(j == 0) continue;
			else dfs(row,column+j,mark);//東西
		}
	}
}


void solve(){
	int cnt = 0;
	char mark;
	for(int i = 1;i <= H;i++){
		for(int j = 1;j <= W;j++){
			if(grid[i][j] != 'x'){
				mark = grid[i][j];
				cnt++;
				dfs(i,j,mark);
			}
		}
	}
	printf("%d\n",cnt);
}

int main() {
	char mark;
	scanf("%d %d",&H,&W);

	while(!(H == 0 && W == 0)){
		/***下準備**********/
		for(int i = 0; i <= H+1;i++){
			for(int j = 0;j <= W+1;j++){
				grid[i][j] = 'x';//xは探索済を表す
 			}
		}

		for(int h = 1;h <= H;h++){
			for(int w = 1;w <= W;w++){
				cin >>grid[h][w];//1文字ずつ読み込み
			}
		}
		/*********************/

		solve();
		scanf("%d %d",&H,&W);
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}