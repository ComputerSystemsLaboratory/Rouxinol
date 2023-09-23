#include<stdio.h>
int main(void){
int a,b,c,i;
	for(;;){
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1){
			break;}
		if(a==-1||b==-1){
			printf("F\n");
		}else if(80<=a+b){
			printf("A\n");
		}else if(80>a+b&&65<=a+b){
			printf("B\n");
		}else if(65>a+b&&50<=a+b){
			printf("C\n");
		}else if(50>a+b&&30<=a+b){
			if(50<=c){
				printf("C\n");
			}else{
				printf("D\n");
			}
		}else{
		printf("F\n");
		}
	}
	return 0;
}