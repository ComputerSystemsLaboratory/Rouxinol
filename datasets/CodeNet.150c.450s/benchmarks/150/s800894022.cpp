#include<stdio.h>
#include<stdlib.h>
#define MAX 2000001
#define VMAX 10000

int main()
{
	short *A,*B;
	int c[VMAX+1];
	int n,i,j;
	scanf("%d",&n);
	A=(short*)malloc(sizeof(short)*(n+1));
	B=(short*)malloc(sizeof(short)*(n+1));
	for(i=0;i<=VMAX;i++)
	{
		c[i]=0;		
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i+1]);
		c[A[i+1]]++;
	}	
	for(i=1;i<=VMAX;i++)
	{
		c[i]+=c[i-1];
	}
	for(j=1;j<=n;j++)
	{
		B[c[A[j]]]=A[j];
		c[A[j]]--;
	}
	for(i=1;i<=n;i++)
	{
		if(i>1)
			printf(" ");
		printf("%d",B[i]);
	}
	printf("\n");
	return 0;
} 
