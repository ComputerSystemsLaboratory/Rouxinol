#include<stdio.h>
void swap(int*, int*);

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b || a > c) {
		if (b > c) {
			swap(&a, &c);
		}
		else {
			swap(&a, &b);
		}
	}
	if (b > c) {
		swap(&b, &c);
	}
	printf("%d %d %d\n",a, b, c);
	return	0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}