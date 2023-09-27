#include <stdio.h>

int main(void)
{
	int number, x, y, z;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%d %d %d", &x, &y, &z);
		if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
}