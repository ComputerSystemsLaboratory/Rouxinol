#include<stdio.h>
#define N 100
void InsertionSort(int array[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		if (i != 0) 
			printf(" ");
		printf("%d", array[i]);
	}
	printf("\n");
	for (i = 1; i < n; i++) {
		int v = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > v) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = v;
		int k;
		for (k = 0; k < n; k++) {
			if (k != 0) 
				printf(" ");
			printf("%d", array[k]);
		}
		printf("\n");
	}
}
int main() {
	int n, array[N];
	
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	InsertionSort(array, n);
	return 0;
}