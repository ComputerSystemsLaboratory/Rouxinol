#include <stdio.h>

int main(void){

	long a,b,c,i;

	
	while(scanf("%ld %ld",&a,&b)!=EOF){
		c = a+b;
		i = 1;
		while(c>=10){
			c=c/10;
			i++;
		}
		printf("%ld\n",i);

	}

	return 0;
}