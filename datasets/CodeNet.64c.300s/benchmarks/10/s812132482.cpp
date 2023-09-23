#include <stdio.h>
int main(void){
	int x;
	int y;
	int buf;
	
	
	while(1){
	
	scanf("%d %d",&x,&y);
	
	if(x == 0 && y == 0) break;
	
	if(x > y){
		
		buf = x;
		x = y;
		y = buf;
	}
	
	printf("%d %d\n",x,y);
	
	}
}