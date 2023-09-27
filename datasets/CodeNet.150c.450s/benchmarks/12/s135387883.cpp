#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 250

int H, T[MAX + 1];

void print(int node) {
	printf("node %d: key = %d, ", node, T[node]);
	if (node > 1) printf("parent key = %d, ", T[node / 2]);
	if (2 * node <= H) printf("left key = %d, ", T[2 * node]);
	if (2 * node + 1 <= H) printf("right key = %d, ", T[2 * node + 1]);
	printf("\n");
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; ++i) {
		int key; cin >> key;
		T[i] = key;
	}
	for (int i = 1; i <= H; ++i) print(i);

	return 0;
}
