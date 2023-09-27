#include<stdio.h>

long long int kaijo(long long int);


int main()
{
	long long int n;
	scanf("%lld", &n);
	printf("%lld\n", kaijo(n));
}

long long int kaijo(long long int n)
{
	if (n == 0)return 1;
	return n*kaijo(n - 1);
}