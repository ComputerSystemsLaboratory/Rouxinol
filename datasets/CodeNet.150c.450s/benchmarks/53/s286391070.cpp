#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int n[2], result[100];

int main()
{
	scanf("%d", &n[0]);

	n[1] = n[0];

	int a = 2;
	int b = 0;

	while (n[1] > 1)
	{
		if (n[1] % a == 0)
		{
			result[b] = a;
			n[1] /= a;
			b++;
		}
		else
		{
			a++;
		}

		if (result[b] == 0 && a > sqrt(n[1]))
		{
			result[b] = n[1];
			b++;
			break;
		}
	}

		printf("%d:", n[0]);
		for (int x = 0; x < b - 1; x++)
		{
			printf(" %d", result[x]);
		}
		printf(" %d\n", result[b - 1]);

	return 0;
}