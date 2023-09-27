#include<stdio.h>
int main(void){
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(w<x+r || h<y+r || 0>x-r ||0>y-r){
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	return 0;
}