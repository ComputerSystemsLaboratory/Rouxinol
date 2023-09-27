#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int area = a*b;
	int c = a * 2 + b * 2;
	
	printf("%d %d\n", area, c);
}