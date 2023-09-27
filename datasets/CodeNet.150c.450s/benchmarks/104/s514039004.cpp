#include<stdio.h>
int main(void)
{
	int a,s,d,f,g[31],h,i,j;
	scanf("%d",&a);
	scanf("%d",&s);
	for(i=1;i<=a;i++){
		g[i]=i;
	}
	for(i=1;i<=s;i++){
		scanf("%d,%d",&d,&f);
		h=g[d];
		g[d]=g[f];
		g[f]=h;
	}
	for(i=1;i<=a;i++){
		printf("%d\n",g[i]);
	}
	return 0;
}