#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a+b>=1000000){
			printf("7\n");
		}
		else if(a+b>=100000){
			printf("6\n");
		}
		else if(a+b>=10000){
			printf("5\n");
		}
		else if(a+b>=1000){
			printf("4\n");
		}
		else if(a+b>=100){
			printf("3\n");
		}
		else if(a+b>=10){
			printf("2\n");
		}
		else{
			printf("1\n");
		}
	}
	return 0;
}