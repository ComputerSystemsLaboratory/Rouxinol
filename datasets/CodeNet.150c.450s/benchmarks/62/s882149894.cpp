#include <stdio.h>

int main(){
	int a,b,c;
	int temp;
	int min,med,max;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	min = a; med = b; max = c;
	
	if(c < a){               //set a
		temp = c;
		c = a;
		a = temp;
	}else if (b < a){
		temp = b;
		b = a;
		a = temp;
	}
	
	if (b < a){
		temp = b;
		b = a;
		a = temp;
	}
	
	if(c < b){
		temp = c;
		c = b;
		b = temp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}