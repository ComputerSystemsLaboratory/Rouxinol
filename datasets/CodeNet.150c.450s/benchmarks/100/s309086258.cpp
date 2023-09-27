#include <cstdio>

int main(int argc, char *argv[]) {
	int rcv;
	fscanf(stdin, "%d", &rcv);
	unsigned long long a = 1ULL;
	for (int i = 2; i <= rcv; i++) {
		a *= i;
	}
	printf("%lld\n", a);
	return 0;
}