#include<stdio.h>
int main(void)
{
    int n,i,a[31];
	for(i=1;i<=30;i++) a[i]=0;
	for(i=0;i<28;i++){
	    scanf("%d",&n);
		a[n]=1;
	}
	for(i=1;i<=30;i++){
		if(a[i]==0) printf("%d\n",i);
	}
	return 0;
}