#include<stdio.h>
int main(void)
{
	int s,ss,sss;
	while(1){
		scanf("%d",&s);
		if(s==0) break;
		ss=1000-s;
		sss=ss/500;
//		printf("500sss=%d\n",sss);
		ss=ss%500;
		sss+=ss/100;
//				printf("100sss=%d\n",sss);
		ss=ss%100;
		sss+=ss/50;
//				printf("50sss=%d\n",sss);
		ss=ss%50;
		sss+=ss/10;
//				printf("10sss=%d\n",sss);
		ss=ss%10;
		sss+=ss/5;
//				printf("5sss=%d\n",sss);
		ss=ss%5;
		sss+=ss/1;
//				printf("1sss=%d\n",sss);
//		sss++;
	printf("%d\n",sss);
	}
	return 0;
}