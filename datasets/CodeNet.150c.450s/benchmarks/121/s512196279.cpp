#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;

char table[100][101];
int height,width,number;

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= height-1 && col >=0 && col <= width-1)return true;
	else{
		return false;
	}
}

void erase(int row,int col){
	char ch = table[row][col];
	table[row][col] = 'd';
	if(rangeCheck(row,col+1) == true && table[row][col+1] == ch)erase(row,col+1); //right
	if(rangeCheck(row,col-1) == true && table[row][col-1] == ch)erase(row,col-1); //left
	if(rangeCheck(row-1,col) == true && table[row-1][col] == ch)erase(row-1,col); //up
	if(rangeCheck(row+1,col) == true && table[row+1][col] == ch)erase(row+1,col); //down
}

int main(){

	while(true){
		scanf("%d %d",&height,&width);
		if(height == 0 && width == 0)break;

		for(int i =0; i < height; i++){
			scanf("%s",table[i]);
		}

		number = 0;
		for(int i = 0; i < height; i++){
			for(int k=0; k < width; k++){
				if(table[i][k] == '@' || table[i][k] == '#'||table[i][k] == '*'){
					number++;
					erase(i,k);
				}
			}
		}

		printf("%d\n",number);

	}

    return 0;
}