#include<stdio.h>

int main() {
	int length = 0;
	int height = 0;
	int area = 0;
	int cir = 0;

	scanf("%d %d", &length, &height);
	area = length*height;
	cir = 2*(length + height);

	printf("%d %d\n", area, cir);

	return 0;
}