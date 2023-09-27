#include <cstdio>
#include <iostream>

using namespace std;

unsigned long long fac(int n) {
	if (n == 1 || n == 0) return 1;
	return fac(n - 1) * n;
}

int main() {
	int n;
	while (~scanf("%d", &n)) {
		printf ("%llu\n", fac(n));
	}
	return 0;
}