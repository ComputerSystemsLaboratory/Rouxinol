#include<stdio.h>
int main(void)
{
	int a,b,c,d,i,z,x[1000];
	char w[10];
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		x[i]=0;
		x[i]=i+1;
	}
	z=0;
	for(i=0;i<b;i++){
		scanf("%d %c %d",&c,w,&d);
		z=x[c-1];
		x[c-1]=x[d-1];
		x[d-1]=z;
	}
	for(i=0;i<a;i++){
		printf("%d\n",x[i]);
	}
	return 0;
}