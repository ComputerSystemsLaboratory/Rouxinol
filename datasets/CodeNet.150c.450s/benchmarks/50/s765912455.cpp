#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,o,s,m;
	
	scanf("%d",&m);
	while(m!=0){
		a=0;
		b=0;
		c=0;
		d=0;
		e=0;
		f=0;
		s=0;
		
		o=1000-m;
		a=o/500;
		o=o-500*a;
		b=o/100;
		o=o-100*b;
		c=o/50;
		o=o-50*c;
		d=o/10;
		o=o-10*d;
		e=o/5;
		o=o-5*e;
		f=o/1;
		o=o-1*f;
	
	s=a+b+c+d+e+f;
	
	printf("%d\n",s);
	scanf("%d",&m);
	}
	
	return 0;
}