#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if ((W >= x + r && 0 <= x - r) && (H >= y + r && 0 <= y - r)){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}