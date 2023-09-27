#include <stdio.h>
#include <stack>
#include <math.h>
#include <queue>

using namespace std;

int W,H;
bool visited[20][20];
char table[20][21];

struct Tile{
	int row,col;
};

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= H-1 && col >=0 && col <= W-1)return true;
	else{
		return false;
	}
}

void func(int row,int col){
	queue<Tile> Q;
	Tile tile;
	tile.row = row;
	tile.col = col;

	Q.push(tile);

	Tile tmp;
	while(!Q.empty()){
		tmp = Q.front();
		Q.pop();

		if(rangeCheck(tmp.row-1,tmp.col) == true && visited[tmp.row-1][tmp.col] == false && table[tmp.row-1][tmp.col] == '.'){
			visited[tmp.row-1][tmp.col] = true;

			Tile newTmp;
			newTmp.row = tmp.row-1;
			newTmp.col = tmp.col;
			Q.push(newTmp);
		}
		if(rangeCheck(tmp.row+1,tmp.col) == true && visited[tmp.row+1][tmp.col] == false && table[tmp.row+1][tmp.col] == '.'){
			visited[tmp.row+1][tmp.col] = true;
			Tile newTmp2;
			newTmp2.row = tmp.row+1;
			newTmp2.col = tmp.col;
			Q.push(newTmp2);
		}
		if(rangeCheck(tmp.row,tmp.col-1) == true && visited[tmp.row][tmp.col-1] == false && table[tmp.row][tmp.col-1] == '.'){
			visited[tmp.row][tmp.col-1] = true;
			Tile newTmp3;
			newTmp3.row = tmp.row;
			newTmp3.col = tmp.col-1;
			Q.push(newTmp3);
		}
		if(rangeCheck(tmp.row,tmp.col+1) == true && visited[tmp.row][tmp.col+1] == false && table[tmp.row][tmp.col+1] == '.'){
			visited[tmp.row][tmp.col+1] = true;
			Tile newTmp4;
			newTmp4.row = tmp.row;
			newTmp4.col = tmp.col+1;
			Q.push(newTmp4);
		}
	}
}

int main(){

	int x,y,count;

	while(true){
		scanf("%d %d",&W,&H);
		if(W == 0 && H == 0)break;

		for(int i = 0; i < H; i++){
			for(int k = 0; k < W; k++)visited[i][k] = false;
		}

		for(int i = 0; i < H; i++){
			scanf("%s",table[i]);

			for(int k = 0; k < W; k++){
				if(table[i][k] == '@'){
					y = i;
					x = k;
				}
			}
		}

		visited[y][x] = true;
		func(y,x);

		count = 0;

		for(int i = 0; i < H; i++){
			for(int k = 0; k < W; k++){
				if(visited[i][k] == true)count++;
			}
		}

		printf("%d\n",count);

	}


    return 0;
}