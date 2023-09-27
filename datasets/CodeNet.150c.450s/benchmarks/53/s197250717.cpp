#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	long int n;
	scanf("%ld", &n);

	double ceilodd = sqrt(n*1.0);

	bool divisable = false;

	printf("%ld:", n);

	while (n % 2 == 0)
	{
		printf(" 2");
		n /= 2;
	}

	while (n % 3 == 0)
	{
		printf(" 3");
		n /= 3;
	}

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
			while (n%i == 0)
			{
				printf(" %ld", i);
				n /= i;
				if (n == 1)break;
			}
			if (n == 1)break;
		}

	}
	
	if (n != 1)
		printf(" %ld", n);


		printf("\n");
	
	return 0;
}