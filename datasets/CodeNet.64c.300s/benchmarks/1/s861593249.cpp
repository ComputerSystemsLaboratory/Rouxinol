#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int partition(int *A,int p,int r)
{
	int x,j,temp;

	x = A[r];
	j = p-1;

	for(int i = p; i < r; i++)
	{
		if (A[i] <= x)
		{
			j++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}

	temp = A[j+1];
	A[j+1] = A[r];
	A[r] = temp;

	return j+1;
}

int main()
{
	int n,a[100000] = {0};
	int q;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	q = partition(a,0,n-1);

	for(int i = 0; i < n; i++)
	{
		if (i == q)
		{
			printf("[%d] ", a[i]);
		}else if (i == n-1)
		{
			printf("%d\n", a[i]);
		}else
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}
	