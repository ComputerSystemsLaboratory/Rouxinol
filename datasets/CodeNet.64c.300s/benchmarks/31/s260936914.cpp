#include<stdio.h>
int main(void)
{
	int n,a[30],i;
	for(i=1;i<=30;i++) a[i]=0;
	for(i=1;i<=28;i++){
		scanf("%d",&n);
		a[n]=1;
	}
	for(i=1;i<=30;i++){
		if(a[i]!=1) printf("%d\n",i);
	}
	return 0;
}	