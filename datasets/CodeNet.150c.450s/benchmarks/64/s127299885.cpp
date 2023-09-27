#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;



int main()
{
	int n,q,a,m,last,temp=0;
	bool dp[2001]={0};

	scanf("%d", &n);

	dp[0] = true;
	last = 0;

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		temp = 0;

		for(int j = last; j >= 0; j--)
		{
			if (dp[j])
			{
				temp = max(j+a,temp);
				dp[j + a] = true;
			}
		}

		last = max(temp,last);
	}

	scanf("%d", &q);

	for(int i = 0; i < q; i++)
	{
		scanf("%d", &m);

		if (dp[m])
		{
			printf("yes\n");
		}else
		{
			printf("no\n");
		}
	}

	return 0;
}
	