#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int map[50][50],width,height;
int dx[8] = {-1,0,1,-1,1,-1,0,1},dy[8] = {-1,-1,-1,0,0,1,1,1};

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= height-1 && col >= 0 && col <= width-1)return true;
	else{
		return false;
	}
}

void erase(int row,int col){
	map[row][col] = 0;

	for(int i = 0; i < 8; i++){
		if(rangeCheck(row+dy[i],col+dx[i]) == true && map[row+dy[i]][col+dx[i]] == 1)erase(row+dy[i],col+dx[i]);
	}
}


int main(){

	int count;

	while(true){
		scanf("%d %d",&width,&height);
		if(width == 0 && height == 0)break;

		for(int i = 0; i < height; i++){
			for(int k = 0; k < width; k++){
				scanf("%d",&map[i][k]);
			}
		}

		count = 0;

		for(int row = 0; row < height; row++){
			for(int col = 0; col < width; col++){
				if(map[row][col] == 1){
					count++;
					erase(row,col);
				}
			}
		}


		printf("%d\n",count);

	}


	return 0;
}