#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

char s[10000];

int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		long long int maxw = -10000000000000;
		long long int ms = 0;
		long long int now = 0;
		for(int i = 0; i < n; i++)
		{
			long long int w;
			scanf("%lld",&w);
			now += w;
			maxw = max(maxw,now - ms);
			ms = min(ms,now);
		}
		printf("%lld\n",maxw);
	}
	return 0;
}