#include <stdio.h>
int main(void)
{
	int W,H,x,y,r;
	int flg=0;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	//chek width
	if(((x-r)>=0) && ((x+r)-W)<=0){
		//check height
		if(((y-r)>=0) && ((y+r)-H)<=0){
			printf("Yes\n");
			flg=1;
		}
	}
	
	if(flg==0)
		printf("No\n");
	return 0;
}