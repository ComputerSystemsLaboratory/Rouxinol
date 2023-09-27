#include<stdio.h>
int main(void)
{
	int w,h,x,y,r,sw,yh,a,b;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(x<w && y<h){
		sw=w-x+r;
		yh=h-y+r;
		a=x-r;
		b=y-r;
		if(a<0 || b<0){
			printf("No\n");
		}
		else if(0<=sw && 0<=yh){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	else{
		printf("No\n");
	}
	return 0;
}