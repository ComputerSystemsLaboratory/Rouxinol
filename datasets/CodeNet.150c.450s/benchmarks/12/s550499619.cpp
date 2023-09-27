#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <map>

using namespace std;

int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return 2 * i + 1;
}

int main() {
	int H;
	int A[251];
	int pk, lk, rk;
	cin >> H;
	for (int i = 1; i <= H; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= H; i++) {
		printf("node %d: ", i);
		printf("key = %d, ", A[i]);
		pk = parent(i);
		if (1 <= pk) {
			printf("parent key = %d, ", A[pk]);
		}
		lk = left(i);
		if (lk <= H) {
			printf("left key = %d, ", A[lk]);
		}
		rk = right(i);
		if (rk <= H) {
			printf("right key = %d, ", A[rk]);
		}
		printf("\n");
	}
}