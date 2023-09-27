#include <iostream>
#include <stdio.h>

using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	long long a, b, t;
	while (scanf("%lld%lld", &a, &b) != EOF)
	{
		if (a < b)
			t = gcd(b, a);
		else
			t = gcd(a, b);
		printf("%lld %lld\n", t, a * b / t);
	}
	return 0;
}