#include <stdio.h>
int main()
{
	int n,m,a[100][100]={0},b[100],c[100]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i]=c[i]+a[i][j]*b[j];
		}
		printf("%d\n",c[i]);
	}
	return 0;
}