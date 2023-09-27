#include<stdio.h>

int main(void){
	int a,n[101]={0},m=0;
	while(~scanf("%d",&a)){
		n[a]++;
		m=m>n[a]?m:n[a];
	}
	for(int i=0;i<101;i++)if(m==n[i])printf("%d\n",i);
	return 0;
}