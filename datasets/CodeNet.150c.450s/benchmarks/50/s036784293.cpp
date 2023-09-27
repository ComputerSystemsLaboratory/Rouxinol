#include<stdio.h>

int main(void){
	int n,k;

	while(0==0){
		scanf("%d",&n);
		if(n==0)break;
		n=1000-n;
		k=0;
		k += n /500;  
		n =n%500;
		k += n/100;   
		n =n%100;
		k += n/50;    
		n =n%50;
		k += n/10;    
		n =n%10;
		k += n/5;     
		k += n%5;
		printf("%d\n",k);
	}
	return 0;
}