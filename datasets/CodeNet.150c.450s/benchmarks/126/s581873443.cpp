#include <stdio.h>

int solve(){
	
	int masu[32][32] = { 0 };
	int stop[32][32] = { 0 };
	int x,y,N,a,b;
	
	scanf("%d%d",&y,&x);
	if(x == 0)return 0;
	scanf("%d",&N);
	for(int i = 0; i < N; i++){
		scanf("%d%d",&b,&a);
		stop[a][b] = 1;
	}
	/*
	for(int i = 1; i <= x; i++){
		masu[i][0] = 1;
	}
	for(int j = 1; j <= y; j++){
		masu[0][j] = 1;
	}
	*/
	masu[0][1]=1;
	
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			if(!(stop[i][j])){
				masu[i][j] = masu[i-1][j] + masu[i][j-1];
			}
			else{
				masu[i][j] = 0;
			}
			/*
			for(int k = 0; k <= x+1; k++){
				for(int l = 0; l <= y+1; l++){
					printf("%2d ",masu[k][l]);
				}
				puts("");
			}
			puts("");
			*/
		}
	}
	
	printf("%d\n",masu[x][y]);
	return 1;
}

int main(void){
	
	while(solve()){}
	return 0;
	
}