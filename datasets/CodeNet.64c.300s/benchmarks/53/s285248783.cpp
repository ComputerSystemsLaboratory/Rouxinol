#include <stdio.h>
int main(void){
	int a, b, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	int count = 0;
	while (a <= b){
		if (c%a == 0) count++;
		a++;
	}printf("%d\n", count);}