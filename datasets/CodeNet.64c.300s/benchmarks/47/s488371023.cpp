#include<stdio.h>
int a[100];
int main(){
	int now;
	int max=0;
	while(~scanf("%d",&now)){
		a[now-1]++;
		if(a[now-1]>max)max=a[now-1];
	}
	for(int i=0;i<100;i++){
		if(a[i]==max)printf("%d\n",1+i);
	}
}