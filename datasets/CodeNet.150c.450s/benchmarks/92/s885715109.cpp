#include <stdio.h>

int main(void){
	unsigned long int i,j,sum;
	unsigned int count = 0;
	while(1){
		if(scanf("%ld %ld",&i,&j)==EOF)	break;
		
		sum = i+j;
		count = 0;
		for(unsigned long int dec=10;dec<=1000000;dec*=10){
			if(sum < dec)	break;
			count ++;
		}
		printf("%d\n",count+1);
	}
	return 0;
}