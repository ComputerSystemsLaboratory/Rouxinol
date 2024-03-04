
#include <stdio.h>
#define MAX_DATASETS 200

int count_digits(int x) {
    int count = 1;

    while (x /= 10) {
	count++;
    }
    return count;
}

int main(void) {
    int a[MAX_DATASETS], b[MAX_DATASETS], i=0,j;

    while (scanf("%d %d", &a[i], &b[i]) != EOF) {
	i++;
    }
    for (j = 0; j < i; j++) {
	printf("%d\n", count_digits(a[j]+b[j]));
    }
    
}