#include <bits/stdc++.h>
using namespace std;

int numWays[1000005];
void testTriple(int x, int y, int z)
{
	int sum = (x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x);
	numWays[sum]++;
}

int main()
{
	for(int i = 1; i <= 100; i++)
	{
		for(int j = 1; j <= 100; j++)
		{
			for(int k = 1; k <= 100; k++)
				testTriple(i, j, k);
		}
	}
	
	int N;
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
		printf("%d\n", numWays[i]);
}
