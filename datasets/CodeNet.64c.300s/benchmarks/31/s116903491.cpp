#include<stdio.h>
int main(void)
{
	int a[29],flg[31],i,j;
	for(i=1;i<=30;i++){
		flg[i]=0;
	}
	for(i=0;i<28;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<28;i++){
		flg[a[i]]=1;
	}
	for(i=1;i<=30;i++){
		if(flg[i]==0){
			printf("%d\n",i);
		}
	}
	return 0;
}	