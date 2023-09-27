#include <cstdio>
#define MOD 1000000007
using namespace std;
long long pow(long long x, long long n) {
	if (n == 0) return 1;
	if (n % 2 == 0) return pow(x * x % MOD, n / 2);
	return pow(x * x % MOD, n / 2) * x % MOD;
}
int main()
{
	long long x, n;
	scanf("%lld%lld", &x, &n);
	printf("%lld\n", pow(x, n));
	return 0;
}
