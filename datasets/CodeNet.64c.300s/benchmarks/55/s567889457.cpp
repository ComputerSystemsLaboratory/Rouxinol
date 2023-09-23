#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int n;
	int i = 1;
	while (cin >> n, n) {
		printf("Case %d: %d\n", i, n);
		++i;
	}
}