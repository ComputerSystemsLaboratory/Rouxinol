#include <stdio.h>

int main(void)
{
	int w, h, x, y, r;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
	int xmin = x - r;
	int xmax = x + r;
	int ymin = y - r;
	int ymax = y + r;
	if(xmin >= 0 && xmax <= w && ymin >= 0 && ymax <= h){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}