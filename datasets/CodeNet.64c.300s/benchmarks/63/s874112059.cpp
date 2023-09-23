#include<stdio.h>
int main(void)
{
	long int a,b,aa,ba,i,x,y,bb;
	aa=1;
	ba=1;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		x=a;
		y=b;
		aa=1;
		ba=1;
		
		if(b<a){
			while(1){
				if(aa==0){
					break;
				}
				aa=a%b;
				a=b;
				b=aa;
			}
			ba=x*y/a;
			printf("%ld %ld\n",a,ba);
		}
		else{
			while(1){
				if(aa==0){
					break;
				}
				aa=b%a;
				b=a;
				a=aa;
			}
			ba=x*y/b;
			printf("%ld %ld\n",b,ba);
		}
	}
}