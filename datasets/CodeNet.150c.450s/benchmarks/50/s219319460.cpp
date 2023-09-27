#include<stdio.h>
int main(void)
{
	int a,s,s1;
	while(1){
		scanf("%d",&a);
		if(a==0)break;
		s=1000-a;
		s1=s/500;
		s=s%500;
		s1+=s/100;
		s=s%100;
		s1+=s/50;
		s=s%50;
		s1+=s/10;
		s=s%10;
		s1+=s/5;
		s=s%5;
		s1+=s/1;
		printf("%d\n",s1);
	}
	
	return 0;
}
	