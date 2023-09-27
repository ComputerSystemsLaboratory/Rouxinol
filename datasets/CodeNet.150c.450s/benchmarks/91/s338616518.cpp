#include<cstdio>
#define MAX 1000010

bool is_prime[MAX];

int sieve(int n) {
	for (int i = 0; i <= n; ++i) is_prime[i] = true;	
	is_prime[0] = is_prime[1] = false;
	int count = 0;
	for (int i = 2; i <= n; ++i) {
		if (is_prime[i]) {
			++count;
			for (int j = 2 * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}
	return count;
}

int main()
{
	int n;
	while (scanf("%d", &n) == 1) {
		printf("%d\n", sieve(n));
	}
	return 0;
}