#include <stdio.h>

int main(){
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(0<=x-r && x+r<=w && 0<=y-r && y+r<=h){
		printf("Yes\n");
	}else{
		printf("No\n");		
	}
	return 0;
}