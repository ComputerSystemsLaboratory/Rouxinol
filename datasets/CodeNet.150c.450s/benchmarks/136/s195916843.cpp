#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef int LL;

LL gcd(LL a, LL b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

LL lcm(LL a, LL b) {
	return a * (b / gcd(a, b));
}

int main() {
	LL a, b;
	while (~scanf("%Id%Id", &a, &b)) {
		printf("%Id %Id\n", gcd(a, b), lcm(a, b));
	}

	return 0;
}