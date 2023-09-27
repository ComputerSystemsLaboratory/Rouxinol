#include <stdio.h>

int main(void)
{
	int W,H,x,y,r;
	
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	if(y <= 0 || x <= 0){
		printf("No\n");
	}
	if(y >= 1 && x >= 1){
		if(H-y < r || W - x < r){
			printf("No\n");
		}
		else {
			printf("Yes\n");
		}
	}
	
	return(0);
}