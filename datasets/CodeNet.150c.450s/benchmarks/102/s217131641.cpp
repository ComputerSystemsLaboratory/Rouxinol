#include<stdio.h>

char room[21][21];
int count,W,H;

void root(int W_n,int H_n){
	if((H_n+1)<H&&room[H_n+1][W_n]=='.'){
		room[H_n+1][W_n]='#';
		count++;
		root(W_n,H_n+1);
	}
	if(W_n>0&&room[H_n][W_n-1]=='.'){
		room[H_n][W_n-1]='#';
		count++;
		root(W_n-1,H_n);
	}
	if(H_n>0&&room[H_n-1][W_n]=='.'){
		room[H_n-1][W_n]='#';
		count++;
		root(W_n,H_n-1);
	}
	if((W_n+1)<W&&room[H_n][W_n+1]=='.'){
		room[H_n][W_n+1]='#';
		count++;
		root(W_n+1,H_n);
	}

}


int main(void){
	
	scanf("%d%d",&W,&H);
	while(W!=0&&H!=0){
		count=1;
		for(int i=0;i<H;i++){
			scanf("%s",room[i]);
		}
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(room[i][j]=='@'){
					root(j,i);
				}
			}
		}
		printf("%d\n",count);
		scanf("%d%d",&W,&H);
	}
	return 0;
}