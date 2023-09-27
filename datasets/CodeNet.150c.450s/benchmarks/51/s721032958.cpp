#include<stdio.h>
int main()
{
	int a[31]={0},i,x;
	for(i=0;i<28;++i)scanf("%d",&x),a[x]=1;
	for(i=1;i<31;++i)if(!a[i])printf("%d\n",i);
	return 0;
}