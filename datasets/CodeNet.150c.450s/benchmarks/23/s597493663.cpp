#include <cstdio>
#define MAX_N 45
int F[MAX_N] = { 0 };

int fib(const int &n) {
	if (F[n] != 0) return F[n];
	if (n == 0 || n == 1) {
		F[n] = 1;
		return F[n];
	}

	F[n] = fib(n - 1) + fib(n - 2);
	return F[n];
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}