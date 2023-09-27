#include<stdio.h>
#include<math.h>

int main()

{
	unsigned int a,b;
	while(~scanf("%u%u",&a,&b)){
	    
		unsigned int c=a,d=b;
		while(a>0&&b>0){
			if(a>b)a=a%b;
			else b=b%a;
		}
		printf("%u %u\n",a+b,c/(a+b)*d);
		
	}
	
	return 0;
}
