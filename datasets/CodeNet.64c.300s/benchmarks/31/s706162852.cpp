#include<stdio.h>
int f[30];
int n;

int main(){
	for(int i=0;i<30;i++)f[i]=0;
	for(int i=0;i<28;i++){
		scanf("%d",&n);
		f[n-1]=1;
	}
	for(int i=0;i<30;i++){
		if(f[i]==0)printf("%d\n",i+1);
	}
	return 0;
}