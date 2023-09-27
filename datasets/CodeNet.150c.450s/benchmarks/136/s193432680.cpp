#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <algorithm>

using namespace std;

long long int a,b,gcd,lcm;

int main()
{
	while(scanf("%lld %lld", &a, &b) != EOF)
	{
	if (a==b)
	{
		gcd=a;
		lcm=b;
	}
	else
	gcd=__gcd(a,b);
	lcm=a/gcd*b;
    printf("%lld %lld\n",gcd,lcm);
	}
	return 0;
}