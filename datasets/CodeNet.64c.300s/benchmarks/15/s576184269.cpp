#include "stdio.h"
#include <iostream>

using namespace std;

static int MAX_N = 100;

int selectionSort(int n, int* num) {
	int count = 0;
	for(int i = 0; i < n - 1; i ++) {
		int minIndex = i;
		for(int j = i + 1; j < n; j ++) {
			if(num[j] < num[minIndex]) {
				minIndex = j;
			}
		}
		if(minIndex != i) {
			int temp = num[i];
			num[i] = num[minIndex];
			num[minIndex] = temp;
			count ++;
		}
	}
	return count;
}

int main() {
	int n, num[MAX_N];
	scanf("%d", &n);
	for(int i = 0; i < n; i ++) {
		scanf("%d", &num[i]);
	}
	int count = selectionSort(n, num);
	
	for(int i = 0; i < n - 1; i ++) {
		printf("%d ", num[i]);
	}
	printf("%d\n", num[n - 1]);
	printf("%d\n", count);
}