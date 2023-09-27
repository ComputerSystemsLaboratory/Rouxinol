#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d\n", &n);
	int T[250];

	for (int i = 1; i < n + 1; i++) {
		int m;
		scanf("%d", &m);
		T[i] = m;
	}

	for (int i = 1; i < n + 1; i++) {
		printf("node %d: key = %d, ", i, T[i]);
		if (i != 1) {
			printf("parent key = %d, ", T[i / 2]);
		}
		if (i * 2 <= n) {
			printf("left key = %d, ", T[i * 2]);
			if (i * 2 + 1 <= n) {
				printf("right key = %d, \n", T[i * 2 + 1]);
			}
			else {
				printf("\n");
			}
		}
		else {
			printf("\n");
		}
	}

	return 0;
}
