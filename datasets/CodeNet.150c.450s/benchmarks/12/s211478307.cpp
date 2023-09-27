#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

#define MAX_H 251

int main() {
	int h = 0;
	scanf("%d", &h);
	int heap[MAX_H] = { 0 };
	for (int i = 1; i <= h; i++) {
		scanf("%d", &heap[i]);
	}
	for (int i = 1; i <= h; i++) {
		int parent = heap[i/2];
		int left = heap[i*2];
		int right = heap[i*2 + 1];
		printf("node %d: ",i);
		printf("key = %d, ", heap[i]);
		if ((i/2) >= 1) printf("parent key = %d, ", parent);
		if ((i*2) <= h) printf("left key = %d, ",left);
		if ((i * 2+1) <= h) printf("right key = %d, ", right);
		printf("\n");
	}
	return 0;
}