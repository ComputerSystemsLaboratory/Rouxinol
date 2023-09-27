#include<stdio.h>
int main(void)
{
	int a[31],i,x;
	for(i=1;i<31;i++) a[i]=0;
	for(i=1;i<31;i++){
		scanf("%d",&x); a[x]=1;
	}
	for(i=1;i<31;i++){
		if(a[i]==0)  printf("%d\n",i);
	}
	return 0;
}