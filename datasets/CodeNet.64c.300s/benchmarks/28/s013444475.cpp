#include <stdio.h>

int main(){

	int	w, h, x, y, r;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

	if ((x - r) < 0 || (x + r) > w){
		printf("No\n");
		return 0;
	}

	if ((y - r) < 0 || (y + r) > h){
		printf("No\n");
		return 0;
	}

	printf("Yes\n");

	return 0;
}