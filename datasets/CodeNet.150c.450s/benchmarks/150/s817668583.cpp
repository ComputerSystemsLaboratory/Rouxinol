#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define max 2000001
#define vmax 10000
using namespace std;

int main()
{
	unsigned short *a,*b;
	
	int c[vmax+1];
	int n,i,j;
	scanf("%d",&n);
	
	memset(c,0,sizeof(c));
	a=(unsigned short *)malloc(sizeof(short)*n+1);
	b=(unsigned short *)malloc(sizeof(short)*n+1);
	for(i=0;i<n;i++)
	{
		scanf("%hu",&a[i+1]);
		c[a[i+1]]++;
	}
	for(i=1;i<=vmax;i++)
	    c[i]=c[i]+c[i-1];
	for(j=1;j<=n;j++)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]--;
	}
	for(i=1;i<=n;i++)
	{
		if(i>1) printf(" ");
		printf("%hu",b[i]);
	}
	printf("\n");
	return 0;
}