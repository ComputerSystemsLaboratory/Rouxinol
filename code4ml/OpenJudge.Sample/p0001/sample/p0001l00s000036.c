#include <stdio.h>
#include <stdlib.h>
int calDigit(int);
int main() {
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF) {
		printf("%d\n", calDigit(a+b));
	}
	return 0;
}

int calDigit(int num) {
	int count = 0;
	if(num == 0) count = 1;
	while(num > 0) {
		num /= 10;
		count++;
	}
	return count;
}
