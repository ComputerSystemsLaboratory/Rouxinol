#include<stdio.h>

int main(){
	
	int width, height, x, y, r;

	scanf("%d %d %d %d %d", &width, &height, &x, &y, &r);

	if((0 <= x - r) && (x + r <= width) && (0 <= y - r) && (y + r <= height)){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
}