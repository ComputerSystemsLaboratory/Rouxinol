#include<stdio.h>
int main(void)
{
	long int a,s,d,f,g,h,i,j;
	while(scanf("%ld %ld",&a,&s)!=EOF){
		g=0;
		g=a*s;
		if(a<s){
			d=a;
			a=s;
			s=d;
		}
		d=a%s;
		while(d!=0){
			a=s;
			s=d;
			d=a%s;
		}
		printf("%ld %ld\n",s,g/s);
	}
	return 0;
}