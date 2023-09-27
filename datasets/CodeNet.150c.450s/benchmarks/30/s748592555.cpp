#include <iostream>
#include <cstdio>
#define MAX_N 100
using namespace std;

void display(int ary[], int size);
int selectionSort(int ary[], int size);

int main(void) {
	int N;
	int ary[MAX_N];

	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> ary[i];
	}

	int cnt = selectionSort(ary, N);
	printf("%d\n", cnt);

	return 0;
}

void display(int ary[], int size) {
	for(int i = 0; i < size; i++) {
		printf("%d", ary[i]);
		if(i == size-1) putchar('\n');
		else            putchar(' ');
	}
}

int selectionSort(int ary[], int size) {
	int cnt = 0;
	for(int i = 0; i < size; i++) {
		int minj = i;
		for(int j = i; j < size; j++) {
			if(ary[j] < ary[minj]) {
				minj = j;
			}
		}
		if(i != minj) {
			swap(ary[i], ary[minj]);
			cnt++;
		}
	}
	display(ary, size);
	return cnt;
}