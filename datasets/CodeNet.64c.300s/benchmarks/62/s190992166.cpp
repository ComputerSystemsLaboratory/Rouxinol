#include <stdio.h>


int main() {
	int n,m,f,r,v;
	int A[100][100] = { { } };
	int b[100] = {};
	int c[100] = {};
	scanf("%d%d", &n,&m);
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &b[j]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i] += b[j] * A[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", c[i]);
	}

	return 0;
}