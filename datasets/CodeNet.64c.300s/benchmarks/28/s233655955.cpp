#include<stdio.h>

int main()
{
	int W,H,x,y,r,v1,v2,y1,y2;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	v1=x+r;
	v2=W-(x-r);
	y1=y+r;
	y2=H-(y-r);
	if(v1>W||v2>W||y1>H||y2>H){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
}