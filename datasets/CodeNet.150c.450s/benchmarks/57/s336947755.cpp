#include<stdio.h>
int main(void)
{
	int a,s,f;
	char d[2];
	while(1){
		scanf("%d %c %d",&a,&d[1],&s);
		if(d[1]=='?')
			break;
		if(d[1]=='+')
			f=a+s;
		if(d[1]=='*')
			f=a*s;
		if(d[1]=='-')
			f=a-s;
		if(d[1]=='/')
			f=a/s;
		printf("%d\n",f);
	}
	return 0;
}	