#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
#include<string.h>

const int MAXN = 1000000000;
const int MAX_BOUND = 31623;

struct PrimeInfo
{
	int v;
	int cnt;
};
struct PrimeInfoArr
{
	PrimeInfo arr[MAX_BOUND];
	int len;
};

PrimeInfoArr piarr;
char isprime[MAX_BOUND];

bool is_prime(const int n) {
	int b = (int)sqrt(n) + 1;
	for (int i = 2; i < b; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void init() {
	memset(&piarr, 0, sizeof(piarr));
	memset(isprime, -1, sizeof(isprime));
	//set the primes
	for (int i = 2; i < MAX_BOUND; i++) {
		if (isprime[i]) {
			for (int j = i * i; j < MAX_BOUND; j += i) {
				isprime[j] = 0;
			}
		}
	}
}

void getrs(const int n) {
	int b = std::min(MAX_BOUND - 1, n -1);
	int rn = n;
	//is a prime
	if ( (n < MAX_BOUND && isprime[n]) || (n >= MAX_BOUND && is_prime(n)) ){
		printf("%d: %d\n", n, n);
		return;
	}
	for (int i = 2; i < b; i++) {
		if (rn == 1) { break; }
		if (isprime[i] && (rn % i == 0)) {
			piarr.arr[piarr.len].v = i;
			while (rn % i == 0) {
				piarr.arr[piarr.len].cnt++;
				rn /= i;
			}
			piarr.len++;
		}
	}
	printf("%d:", n);
	for (int i = 0; i < piarr.len; i++) {
		for (int j = 0; j < piarr.arr[i].cnt; j++) {
			printf(" %d", piarr.arr[i].v);
		}
	}
	putchar('\n');
}

int main() {
	int n;
	init();
	scanf("%d", &n);
	getrs(n);
	return 0;
}
