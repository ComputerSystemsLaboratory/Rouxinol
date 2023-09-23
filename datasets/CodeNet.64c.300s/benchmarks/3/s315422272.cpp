#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n );
	for(int i = 0; i < n; ++i)
	{
		int k;
		scanf("%d",&k);
		a[i] = k;
	}

	for(int i = 0; i < n; ++i)
	{
		printf("%d", a[n - 1 - i]);
		if( i != n -1 )
			printf(" ");
		else
			printf("\n");
	}
	
	free(a);
	return 0;
}