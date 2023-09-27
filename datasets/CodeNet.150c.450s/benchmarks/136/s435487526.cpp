#include<stdio.h>
int main(void)
{
	int a,aa,b,bb,c,s,ss;
	while(scanf("%d %d",&a,&b)!=EOF){
		aa=a;  
		bb=b;
		if(a<b){
			c=a;
			a=b;
			b=c;
		}
		while(1)	{
			if(a%b==0)	{
				break;
			}
			else	{
				c=a%b;
				a=b;
				b=c;	
			}
		}
		s=b;
		ss=aa/b*bb;
		printf("%d %d\n",s,ss);
	}
	return 0;
}