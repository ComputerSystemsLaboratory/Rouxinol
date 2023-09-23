#include<stdio.h>

int main(void){

	int d,inte;

	while(scanf("%d",&d)!=EOF){
		inte=0;
		for(int i=d;i<=600-d;i+=d){
			inte=inte+(d*i*i);
		}
		printf("%d\n",inte);
	}
	


	return 0;
}