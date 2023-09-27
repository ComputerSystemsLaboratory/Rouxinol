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

int main() {
	int n;
	cin >> n;
	long long *nodes = new long long[n+1];
	for (int i = 1; i <= n; ++i)
		cin >> nodes[i];
	for (int i = 1; i <= n; ++i) {
		printf("node %d: key = %lld, ", i, nodes[i]);
		int p = i / 2;
		if (1 <= p && p <= n)
			printf("parent key = %lld, ", nodes[p]);
		int l = i * 2;
		if (1 <= l && l <= n)
			printf("left key = %lld, ", nodes[l]);
		int r = i * 2 + 1;
		if (1 <= r && r <= n)
			printf("right key = %lld, ", nodes[r]);
		cout << endl;
	}

	delete[] nodes;
	return 0;
}