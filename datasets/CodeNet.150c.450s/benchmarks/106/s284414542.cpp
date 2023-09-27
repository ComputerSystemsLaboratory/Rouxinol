#include<stdio.h>
int main(void)
{
	int a,s,d,i,f=0;
	scanf("%d %d %d",&a,&s,&d);
	for(i=a;i<=s;i++){
		if(d%i==0)
			f++;
	}
	printf("%d\n",f);
}