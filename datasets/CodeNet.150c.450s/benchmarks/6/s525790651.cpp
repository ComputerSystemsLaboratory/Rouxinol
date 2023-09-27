#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((c - b > 0) && (b - a > 0)) {
		printf("Yes\n");
	}
	else printf("No\n");

	return 0;
}
