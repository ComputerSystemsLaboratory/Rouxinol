#include <stdio.h>
#include <math.h>

int n;
int a[100];
int count;

void print() {
	for (int i = 0; i < n; i ++) {
		if (i > 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubblesort() {
	for (int i = 0; i < n; i ++) {
		for (int j = n - 1; j >= i + 1; j --) {
			if (a[j] < a[j-1]) {
				swap(&a[j], &a[j-1]);
				count ++;
			}
		}
	}
}

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	bubblesort();
	print();
	printf("%d\n", count);
	return 0;
}