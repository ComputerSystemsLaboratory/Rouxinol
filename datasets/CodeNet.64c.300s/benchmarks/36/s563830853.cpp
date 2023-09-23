/*figure3.c*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int x, y, z;
	if (a < b) {
		if (c < a) {
			x = c;
			y = a;
			z = b;
		}else {
			if (c < b) {
				x = a;
				y = c;
				z = b;
			}else {
				x = a;
				y = b;
				z = c;
			}
		}
	}else { 
	if (c < b) {
			x = c;
			y = b;
			z = a;
		}else {
			if (c < a) {
				x = b;
				y = c;
				z = a;
			}else {
				x = b;
				y = a;
				z = c;
			}//b < a
		}
	}
	printf("%d %d %d\n", x, y, z);
	return 0;
}