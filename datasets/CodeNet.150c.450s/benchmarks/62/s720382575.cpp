#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int *n;
	n = new int[3];
	for (int i = 0; i < 3; i++)
		cin >> n[i];
	sort(n, n + 3);
	printf("%d %d %d\n", n[0], n[1], n[2]);
	return 0;
}