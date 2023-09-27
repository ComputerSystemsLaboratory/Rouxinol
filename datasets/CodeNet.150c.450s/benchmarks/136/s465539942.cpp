#include <cstdio>
using namespace std;
long long int gcd(long long int m,long long int n)
{
	if (n == 0)
		return m;
	return gcd(n,m % n);
}

int main()
{
	long long int a, b;
	while (scanf("%lld %lld",&a,&b) != EOF) {
		if (a >= b)
			printf("%lld %lld\n",gcd(a, b),a*b/ gcd(a, b));
		else
			printf("%lld %lld\n", gcd(b, a), a*b / gcd(b, a));
	}
	return 0;
}