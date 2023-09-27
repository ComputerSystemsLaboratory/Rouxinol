#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	long long int now = 1;
	for(long long int i = 1; i <= n; i++)
	{
		now *= i;
	}
	printf("%lld\n",now);
	return 0;
}