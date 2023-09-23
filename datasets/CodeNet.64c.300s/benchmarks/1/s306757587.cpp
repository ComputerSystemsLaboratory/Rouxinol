#include<iostream>
#include<cstdio>
using namespace std;

int partition(int A[], int p, int r)
{
	int i,j,x,temp;
	
	x=A[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(A[j]<=x)
		{
			i++;
			temp=A[j];
			A[j]=A[i];
			A[i]=temp;
		}
	}
	temp=A[r];
	A[r]=A[i+1];
	A[i+1]=temp;
	return i+1;
}

int main()
{
	int i,n,j,k=0;
	int A[100000];
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++) scanf("%d",&A[i]);
	j=partition(A,0,n-1);
	for(i=0;i<=n-1;i++)
	{
		if(i>0) printf(" ");
		if(i==j) printf("[%d]",A[i]);
		else printf("%d",A[i]);
	}
	printf("\n");
	return 0;
}