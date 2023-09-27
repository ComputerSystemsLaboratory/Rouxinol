#include<stdio.h>
long long int a,s,d[1000][1000],f[1000],g[1000],h,i,j;
int main(void)
{
	scanf("%d %d",&a,&s);
	for(i=0;i<a;i++){
		for(j=0;j<s;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for(i=0;i<s;i++)
		scanf("%d",&f[i]);
		for(i=0;i<a;i++){
			for(j=0;j<s;j++){
			g[i]=g[i]+f[j]*d[i][j];
//			printf("                     %d %d %d %d\n",g[i],f[j],d[i][j],f[j]*d[i][j]);
		}
	}
	for(i=0;i<a;i++)
		printf("%d\n",g[i]);
	return 0;
}