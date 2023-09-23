#include <stdio.h>

int main(void)
{
	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if(x <= 0 || y <= 0 || x+r > W || r+y > H){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
}