#include <stdio.h>

int main(void){
	
	int a,b,c;
	int buf;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > b){
		buf = a;
		a = b;
		b = buf;
	}
	if(b > c){
		buf = b;
		b = c;
		c = buf;
	}
	if(a > b){
		buf = a;
		a = b;
		b = buf;
	}
	
	printf("%d %d %d\n",a,b,c);
}