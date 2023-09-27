#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){
	int col[4][3][10],num,flo,room,per,kaisuu,i,x,y,z;
	scanf("%d",&kaisuu);
	for(i = 0;i < 4;i++){
		for(x = 0;x < 3;x++){
			for(y = 0;y < 10;y++){
				col[i][x][y] = 0;
			}
		}
	}
	for(i = 0;i < kaisuu;i++){
		scanf("%d %d %d %d",&num,&flo,&room,&per);
		col[num - 1][flo - 1][room - 1] = col[num - 1][flo - 1][room - 1] + per;
	}
	for(i = 0;i < 4;i++){
		for(x = 0;x < 3;x++){
			for(y = 0;y < 10;y++){
				printf(" %d",col[i][x][y]);
			}
			printf("\n");
		}
		if(i == 3){
		}else{
			for(z = 0;z < 20;z++){
				printf("#");
			}
			printf("\n");
		}
	}

	return 0;
}