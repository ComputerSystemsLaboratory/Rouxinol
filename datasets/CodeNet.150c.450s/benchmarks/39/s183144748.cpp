#include <cstdio>

int main() {
	int a;
	int b;
	scanf("%d%d", &a, &b);

	int s = a * b;
	int l = 2 * a + 2 * b;
	printf("%d %d\n", s, l);
}