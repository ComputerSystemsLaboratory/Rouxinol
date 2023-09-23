#include <stdio.h>

int weather_right_triangle(int, int, int);

int main(void)
{
	int n;
	scanf("%d", &n);
	int a[n][3];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
		weather_right_triangle(a[i][0], a[i][1], a[i][2]);
	}
	return 0;
}

int weather_right_triangle(int a, int b, int c)
{
	if (a * a + b * b == c * c || 
		b * b + c * c == a * a || 
		a * a + c * c == b * b) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}