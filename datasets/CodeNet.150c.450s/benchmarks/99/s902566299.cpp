#include<stdio.h>
#include<ctype.h>
#define P(c) putchar(c)
int F(char*s)
{
	int r=0,a;
	for(;*s;++s)
	{
		if(isdigit(*s))a=*s++-'0';
		else a=1;
		if(*s=='m')r+=a*1000;
		if(*s=='c')r+=a*100;
		if(*s=='x')r+=a*10;
		if(*s=='i')r+=a;
	}
	return r;
}
int main()
{
	int n,a,k,i;
	char s[9],u[9],x[]="mcxi";
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%s",s,u);
		a=F(s)+F(u);
		for(i=0,k=1000;i<4;++i,k/=10)
			if(a>=k){if(a>=2*k)P(a/k+'0');P(x[i]),a%=k;}
		puts("");
	}
	return 0;
}