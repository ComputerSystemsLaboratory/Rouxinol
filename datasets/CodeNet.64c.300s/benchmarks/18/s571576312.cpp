#include<stdio.h>
int main()
{
	const int N = 31;
	int n,i,j,s;
	while(scanf("%d",&n),n)
	{
		int a[N][N+3]={1};
		for(i=0;i<n;++i)
		{
			for(j = 0; j < n; ++j)
			{
				a[i+1][j+3] += a[i][j];
				a[i+1][j+2] += a[i][j];
				a[i+1][j+1] += a[i][j];
			}
		}
		for(s=i=0;i<n;++i)s+=a[i][n];
		printf("%d\n", (s/10-1)/365+1);
	}
	return 0;
}