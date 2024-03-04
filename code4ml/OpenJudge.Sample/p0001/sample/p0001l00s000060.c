#include<stdio.h>

int main(void){

	int a,b,sum,cnt=0;

	while(scanf("%d %d",&a,&b)!=EOF){
		
		sum=a+b;

		cnt=0;

		while(sum>0){
			sum=sum/10;
			cnt=cnt+1;
		}

		printf("%d\n",cnt);

	}

	return 0;
}