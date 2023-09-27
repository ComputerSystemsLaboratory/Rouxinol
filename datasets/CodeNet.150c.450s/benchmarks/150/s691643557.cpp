#define MAX 2000001
#define VMAX 10001
#include <stdio.h>


int A[MAX], C[VMAX], B[MAX];

int main()//被排序的数至少有一个，所以B数组中的数统一向后移动一位 
{
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	for(i=0;i<n;i++)
	{
		C[A[i]]++;
	}
	for(i=1;i<=VMAX;i++)
	{
		C[i]=C[i]+C[i-1];
	}
	for(i=0;i<n;i++)
	{
		B[C[A[i]]]=A[i];
		C[A[i]]--;
	}
	for(i=1;i<=n;i++)
	{
		if(i>1)
		{
			printf(" ");
		}
		printf("%d", B[i]);
	}
	printf("\n");
	return 0;
}
