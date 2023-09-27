#include<stdio.h>
int main(void)
{
	int a,b,s;
	while(scanf("%d %d",&a,&b)!=EOF){
	s=a+b;
	if(s<10){
		printf("1\n");
	}
	else if(s>9&&s<100){
		printf("2\n");
	}
	else if(s>99&&s<1000){
		printf("3\n");
	}
	else if(s>999&&s<10000){
		printf("4\n");
	}
	else if(s>9999&&s<100000){
		printf("5\n");
	}
	else if(s>99999&&s<1000000){
		printf("6\n");
	}
	else if(s>999999){
		printf("7\n");
	}
	}
	return 0;
}