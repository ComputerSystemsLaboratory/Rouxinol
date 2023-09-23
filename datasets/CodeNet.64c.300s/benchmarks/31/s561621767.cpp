#include<stdio.h>
int main(void){
	int a[31]={0};
	int b,i;
	for(i=1;i<=28;i++){
		scanf("%d",&b);
		a[b]=1;
	}
	for(i=1;i<=30;i++){
		if(a[i]==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
