#include <cstdio>
#include <algorithm>

using namespace std;

int sum[1000001];
bool prime[1000001];

void sieve()
{
	fill_n(prime, 1000001, true);

	prime[1] = false;

	for (int i = 2; i <= 1000000; ++i) {
		sum[i] = sum[i - 1];
		if (!prime[i]) continue;
		sum[i]++;
		for (int k = i + i; k <= 1000000; k += i) {
			prime[k] = false;
		}
	}
}

int main()
{
	sieve();

	int n;
	
	while (~scanf("%d", &n)) printf("%d\n", sum[n]);
}