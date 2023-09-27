#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);

	float x1, y1, x2, y2, x3, y3, x4, y4;

	while (n--) {
		scanf("%f %f %f %f %f %f %f %f",
				   &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

		if ((y2 - y1)/(x2 - x1) == (y4 - y3)/(x4 - x3)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	return 0;
}