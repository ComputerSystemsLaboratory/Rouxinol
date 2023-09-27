#include<stdio.h>

int main()
{
	int w,n,r=1,s;
	int a,b,x[64];
	scanf("%d%d",&w,&n);
	for(int i=0;i<w;i++){
		x[i]=r;
		r++;
	}
	for(int i=0;i<n;i++){
		scanf("%d,%d",&a,&b);
		s=x[a-1];
		x[a-1]=x[b-1];
		x[b-1]=s;
	}
	for(int i=0;i<w;i++){
		printf("%d\n",x[i]);
	}
	return 0;
}