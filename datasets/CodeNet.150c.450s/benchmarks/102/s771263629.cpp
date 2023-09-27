#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define BLACK 0
#define RED 1
#define MAN 2

int count;
int tile[20][20];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int W,H;
int countdebug;

void hukasa(int width,int height);


int main(){

	int height,width;
	int i,j;
	char s;

	while(scanf("%d %d",&W,&H) && W && H){

		count = 0;


		for(j=0; j<H; j++){
			scanf("%*c");
			for(i=0; i<W; i++){

				scanf("%c",&s);

				if(s == '.'){
					tile[i][j] = BLACK;
				}
				else if(s == '#'){
					tile[i][j] = RED;
				}
				else if(s == '@'){
					tile[i][j] = RED;
					height = j;
					width = i;
				}

			}
		}

		hukasa(width,height);

		printf("%d\n",count+1);

	}
	return 0;
}



void hukasa(int width,int height){

	int i;


	for(i=0;i<4;i++){

		if(!(width + dx[i] < 0 || height + dy[i] < 0 || width + dx[i] > W - 1 || height + dy[i] > H - 1) ){
			if(tile[width + dx[i]][height + dy[i]] == BLACK){
				tile[width + dx[i]][height + dy[i]] = RED;
				count++;
				hukasa(width + dx[i],height + dy[i]);
			}
		}

	}
}