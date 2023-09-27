#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[5];
int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%lld ", &a[i]);
	}
	sort(a, a + 5);
	for (i = 4; i>=0; i--)
	{ if (i!=0)
		printf("%lld ", a[i]);
	else
	{
		printf("%lld\n", a[i]);

	}
	}
	return 0;

}