#include <cstdio>

int main(int argc, char const *argv[])
{
	int n,m;
	int A[100][100];
	int b[100];
	int c ;
	scanf("%d %d \n",&n,&m);
	for(int i = 0;i <n;i++)
		for(int j = 0; j <m;j++)
			scanf("%d",&A[i][j]);
	for(int i = 0; i < m;i++)
		scanf("%d",&b[i]);

	for(int i = 0;i<n;i++){
		c = 0;
		for(int j = 0;j<m;j++)
			c += A[i][j] * b[j];
		printf("%d\n",c);
	}

	return 0;
}
