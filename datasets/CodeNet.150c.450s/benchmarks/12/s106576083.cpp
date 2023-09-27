#include<iostream>
#include<stdio.h>

#define MAX 100000
using namespace std;

int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return (2 * i) + 1;
}

int main() {
	int H, x, T[MAX];

	cin >> H;
	
	for (int i = 1; i < H + 1; i++) {
		cin >> x;
		T[i] = x;
	}

	for (int i = 1; i < H + 1; i++) {
		printf("node %d: key = %d, ", i, T[i]);
		if (i > 1){
			printf("parent key = %d, ", T[parent(i)]);
		}
		if (left(i) < H + 1){
			printf("left key = %d, ", T[left(i)]);
		}
		if (right(i) < H + 1) {
			printf("right key = %d, ", T[right(i)]);
		}
		printf("\n");
	}
	return 0;
}

