#include<stdio.h>
int main()
{
	int a[100]={0},i,x;
	scanf("%d",&i);
	for(x=0;x<=i-1;x++)
	{
		scanf("%d",&a[x]);
	}
	for(x=i-1;x>=1;x--)
	{
		printf("%d ",a[x]);
	}
	printf("%d",a[0]);
	printf("\n");
	return 0;
}