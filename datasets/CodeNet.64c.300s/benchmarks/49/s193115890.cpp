#include<stdio.h>
int main(void)
{
	int a,s,d;
	while(scanf("%d %d",&a,&s)!=EOF){
	d=a+s;
	if(d>=0&&d<=9){
		printf("1\n");
	}
	else if(d>=10&&d<=99){
		printf("2\n");
	}
	else if(d>=100&&d<=999){
		printf("3\n");
	}
	else if(d>=1000&&d<=9999){
		printf("4\n");
	}
	else if(d>=10000&&d<=99999){
		printf("5\n");
	}
	else if(d>=100000&&d<=999999){
		printf("6\n");
	}
	else if(d>=1000000){
		printf("7\n");
	}
	}
	return 0;
}