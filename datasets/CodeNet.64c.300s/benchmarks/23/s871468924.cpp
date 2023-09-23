#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	int s, l;
	s = a * b;
	l = a + a + b + b;
	printf("%d %d\n", s,l);
	return(0);
}