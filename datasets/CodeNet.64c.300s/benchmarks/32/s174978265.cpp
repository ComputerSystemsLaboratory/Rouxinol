#include <stdio.h>

int main(void){
	int n,i,num;
	long max,min,sum;
	
    scanf("%d\n %d", &n, &num);
    
    i = 1;
	max = num;
	min = num;
	sum = num;

while(i < n){  
    scanf("%d", &num);

	if( max < num){
	max = num;
	}
	if(min > num){
	min = num;
	
	}
	
	sum = num + sum;
    i++;
    }
 	
	printf("%ld %ld %ld\n",min,max,sum);
	     
    return 0;
} 