#include <cstdio>

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int min(int a, int b) {
	if (a < b) return a;
	else return b;
}
int main() {
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	int m = min(min(a, b), c);
	int M = max(max(a, b), c);
	printf("%d %d %d\n", m, (a + b + c) - (m + M), M);
}