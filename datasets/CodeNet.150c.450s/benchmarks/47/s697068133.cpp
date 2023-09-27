#include<stdio.h>

int main(void){
	int W,H,x,y,r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(W < (x+r) || H < (y+r) || x <= 0 || y <= 0 || x == 100 || y == 100){
		printf("No\n");
	}else{
		printf("Yes\n");
	}	
					
	return 0;
}