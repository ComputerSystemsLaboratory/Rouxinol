#include<stdio.h>
int main(void)
{
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(w<r+x || h<r+y){
		printf("No\n");
	}
	else if(r>x || r>y){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}