#include<stdio.h>
int main() {
	int x, y,temp;

	while (1) {
		scanf("%d%d", &x, &y);
		if (x == 0 && y == 0)break;

		if (x > y) {
			temp = y;
			y = x;
			x = temp;
		}
		printf("%d %d\n", x, y);
		
	}
	return 0;
}