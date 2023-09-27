#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#
#include<cmath>

using namespace std;

int main()
{
	long int n;
	scanf("%ld", &n);

	long int* memo;
	memo = (long int*)malloc(n/3 * sizeof(long int));

	double ceilodd = sqrt(n*1.0);

	bool divisable = false;

	printf("%ld:", n);


	memo[0] = 2;
	while (n % 2 == 0)
	{
		printf(" 2");
		n /= 2;
	}

	memo[1] = 3;
	while (n % 3 == 0)
	{
		printf(" 3");
		n /= 3;
	}

	long int cnt = 2;

	for (long int i = 5; i <= ceilodd; i += 2)
	{
		divisable = false;

		for (long int j = 3; j < sqrt(i*1.0); j += 2)
		{
			if (i%j == 0)
			{
				divisable = true;
				break;
			}
		}

		if (divisable == false)
		{
			memo[cnt] = i;
			while (n%memo[cnt] == 0)
			{
				printf(" %ld", memo[cnt]);
				n /= memo[cnt];
				if (n == 1)break;
			}
			if (n == 1)break;
			cnt++;
		}

	}
	
	if (n != 1)
		printf(" %ld", n);


		printf("\n");

		free(memo);

	
	return 0;
}