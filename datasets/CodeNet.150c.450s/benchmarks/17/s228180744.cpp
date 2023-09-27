#include<stdio.h>
#define n 5

int main(void)
{
	int a[n],i,j,t;

	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);

	for( i = 1; i < n; ++i )
	{
		t = a[i];
		for( j = i; j > 0 && a[j-1] > t; --j )
		{
			a[j] = a[j-1];
		}
		a[j] = t;
	}
	printf("%d",a[n-1]);
	for(i=n-2;i>-1;i--)
		printf(" %d",a[i]);
	printf("\n");
  return 0;
}