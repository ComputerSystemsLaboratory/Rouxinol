#include <stdio.h>

void right_triangle_check(int a, int b, int c);

int main(void)
{
	int set, x, y, z;
	scanf("%d", &set);
	for (int i = 0; i < set; i++) {
		scanf("%d %d %d", &x, &y, &z);
		right_triangle_check(x ,y ,z);
	}
	return 0;
}

void right_triangle_check(int a, int b, int c)
{
	if (a * a + b * b == c * c) {
		printf("YES\n");
	} else if (b * b + c * c == a * a) {
		printf("YES\n");
	} else if (c * c + a * a == b * b) {
		printf("YES\n");
	} else {
		printf("NO\n");
		}
}