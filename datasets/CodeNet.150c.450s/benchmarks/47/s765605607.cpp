#include <stdio.h>

int main(){
	int w,h,x,y,r;
	int temp;
	int min,med,max;
	
	scanf("%d", &w);
	scanf("%d", &h);
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &r);
	
	if(x-r >= 0 && x+r <= w){
		if(y-r >= 0 && y+r <= h)
			printf("Yes\n");
		else
			printf("No\n");
	}else
		printf("No\n");
	return 0;
}