#include<stdio.h>
#include<stdlib.h>
#include<algorithm>


int yukurid(long long int, long long int);

int main()
{
	long long int a, b, tmp;
	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		tmp = a;
		a = a < b ? b : a;
		b = tmp < b ? tmp : b;
		printf("%lld %lld\n", yukurid(a, b),((a*b)/yukurid(a,b)));
	}
	return 0;

}

int yukurid(long long int a, long long int b)
{
	long long int tmp;
	if (a%b == 0)return b;
	else
	{
		tmp = a;
		a = b;
		b = tmp%b;
		return yukurid(a, b);
	}
}