#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b) {
	if (b == 0LL) return a;
	return gcd(b, a%b);
}

LL lcm(LL a, LL b) {
	return a * (b / gcd(a, b));
}

int main() {
	LL a, b;
	while (~scanf("%lld%lld", &a, &b)) {
		printf("%lld %lld\n", gcd(a, b), lcm(a, b));
	}

	return 0;
}