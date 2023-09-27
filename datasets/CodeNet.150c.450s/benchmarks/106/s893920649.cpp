#include <stdio.h>

int main(void){
	int a, b, c;
	int n = 0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = a; i <= b; i++) {
		if (!(c % i)) n++;
	}
	
	printf("%d\n", n);
	return 0;
}