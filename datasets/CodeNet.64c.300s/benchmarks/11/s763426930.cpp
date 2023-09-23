#include<stdio.h>

int main()
{
	int S;
	do{
		scanf("%d",&S);
	}while(0>S&&S>86400);
	if(S<60){
		int s=S;
		int h=0;
		int m=0;
		printf("%d:%d:%d\n",h,m,s);
	}
	else if(S<3600&&S>=60){
		int m=S/60;
		int s=S%60;
		int h=0;
		printf("%d:%d:%d\n",h,m,s);
	}
	else if(S>=3600){
		int a=S%3600;
		int s=a%60;
		int m=a/60;
		int h=S/3600;
		printf("%d:%d:%d\n",h,m,s);
	}
	return 0;
}