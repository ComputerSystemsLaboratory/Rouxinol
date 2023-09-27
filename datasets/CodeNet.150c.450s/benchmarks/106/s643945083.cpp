#include<stdio.h>
int main(void){
	int a, b, c, n=0, e;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	for (;a<=b;a++){
		e = c%a;
	
		if (e==0){
			n++;
		
		}
		
	}
	printf("%d\n", n);
	return 0;
}