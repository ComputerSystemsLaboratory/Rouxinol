#include "bits/stdc++.h"
using namespace std;
int count(int y, int m, int d) {
	int sum = 0;
	for (int i = 1; i < y; i++) {
		if (i % 3 == 0) sum += 20 * 10;
		else sum += (20 + 19) * 5;
	}

	for (int i = 1; i < m; i++) {
		if (y % 3 == 0) sum += 20;
		else if (i % 2 == 1) sum += 20;
		else sum += 19;
	}
	sum += (d - 1);
	return sum;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int y,m, d;
		scanf("%d %d %d", &y, &m, &d);
		printf("%d\n", count(1000, 1, 1) - count(y, m, d));
	}
}