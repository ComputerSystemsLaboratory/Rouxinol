#include <stdio.h>
#pragma warning (disable:4996)

//prototype
int counter(int);

int main() {
	//input
	int N;
	(void)scanf("%d", &N);

	//output
	for (int i = 1; i <= N; i++) {
		printf("%d\n", counter(i));
	}
}

int counter(int i) {
	int count = 0;
	for (int x = 1; x * (x + 2) <= (i - 3); x++) {
		for (int y = 1; y * (x + y + 1) <= i - ((x * x) + x + 1); y++) {
			for (int z = 1; ((x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x)) <= i; z++) {
				if (((x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x)) == i)count++;
			}
		}
	}
	return count;
}