#include <stdio.h>
#include <math.h>

int n;
int a[100];
int count;

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void selectionsort() {
	for (int i = 0; i < n; i ++) {
		int mini = i;
		for (int j = i; j < n; j ++) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
		if (i != mini) {
			swap(&a[i], &a[mini]);
			count ++;
		}
	}
}

void print() {
	for (int i = 0; i < n; i ++) {
		if (i > 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
}

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	}
	selectionsort();
	print();
	printf("%d\n", count);
	return 0;
}