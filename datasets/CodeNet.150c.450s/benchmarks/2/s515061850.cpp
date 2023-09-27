#include<stdio.h>
int partition(int A[],int p,int r)
{
	int x = A[r];
	int i = p-1;

	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i++;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	int tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;

	return i + 1;
}
void B()
{
	int A[100000];
	int n = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	int q = partition(A,0,n-1);
	for (int i = 0; i < n; i++)
	{
		if (i != 0)printf(" ");
		if (i == q)
		{
			printf("[%d]", A[i]);
		}
		else
		{
			printf("%d", A[i]);
		}
	}

	printf("\n");
}
int main()
{
	B();
	return 0;
}