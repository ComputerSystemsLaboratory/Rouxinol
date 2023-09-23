#include<stdio.h>

int main(){
	int st[30]={0},i,n;
	for(i=0;i<28;i++){
		scanf("%d",&n);
		st[n-1]=1;
	}
	for(i=0;i<30;i++)if(st[i]==0)printf("%d\n",i+1);
}