#include <stdio.h>
int main(void){
	int x, y = 1;
	x = 1;
	y = 1;
	while (x + y != 0){
		scanf("%d %d", &x, &y);
		if (x < y)printf("%d %d\n", x, y);
		else if (x > y) printf("%d %d\n", y, x);
		else if (x == y && x != 0) printf("%d %d\n", x, y);
	}
}