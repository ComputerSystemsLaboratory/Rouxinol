#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define MAX_N 100000
//#define DBG_PRINT printf
#define DBG_PRINT(format, ...)

int bit[MAX_N + 1], n;

int sum(int i) {
	int s = 0;
	while (i > 0) {
		DBG_PRINT("sum : i = %d, bit[i] = %d, s = %d", i, bit[i], s);
		s += bit[i];
		i -= i & -i;
	}
	DBG_PRINT("\n");
	return s;
}

void add(int i, int x) {
	while (i <= n) {
		bit[i] += x;
		i += i & -i;
	}
}

int getSum(int x, int y) {
	return sum(y) - sum(x);
}

void printv(int v[], int len) {
	for (int i = 0; i < len; i++)
		DBG_PRINT("%d ", v[i]);
	DBG_PRINT("\n");
}

int main() {
	fill_n(bit, MAX_N + 1, 0);
	int q, com, x, y;
	cin >> n >> q;
	while (q-->0) {
		printv(bit, n + 1);
		cin >> com >> x >> y;
		if (com == 0)
			add(x, y);
		else
			cout << getSum(x - 1, y) << endl;;
	}
	return 0;
}