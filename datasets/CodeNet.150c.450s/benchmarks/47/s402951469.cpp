#include<stdio.h>
int main(void)
{
	int w,h,x,y,r,a,b,c,d;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	a=x+r;
	b=y+r;
	if(a<=w && b<=h && x>=0 && y>=0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
