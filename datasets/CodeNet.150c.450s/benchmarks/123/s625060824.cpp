#include <stdio.h>
int q, n, c;
int modpow(int a, int b, int m) {
	int ret = 1;
	for(int i = 30; i >= 0; i--) {
		ret = 1LL * ret * ret % m;
		if(b & (1 << i)) ret = 1LL * ret * a % m;
	}
	return ret;
}
bool issprp(int x, int a) {
	int d = x - 1, s = 0;
	while(d % 2 == 0) d /= 2, s++;
	int p = modpow(a, d, x);
	if(p == 1) return true;
	for(int i = 0; i < s; i++) {
		if(p == x - 1) return true;
		p = 1LL * p * p % x;
	}
	return false;
}
bool slowprime(int x) {
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return false;
	}
	return true;
}
bool isprime(int x) {
	if(x < 30000) return slowprime(x);
	return issprp(x, 2) && issprp(x, 7) && issprp(x, 61);
}
int main() {
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d", &n);
		if(n > 1 && isprime(n)) c++;
	}
	printf("%d\n", c);
}