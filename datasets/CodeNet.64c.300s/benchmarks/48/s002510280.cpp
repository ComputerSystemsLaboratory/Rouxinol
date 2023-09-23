#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> ll_i;
struct edge { int u, v; ll w; };

void sieve(int n, bool a[]) {
	fill(a, a + n, true);
	a[0] = a[1] = false;
	for (int i = 2; i * i < n; i++)
		if (a[i])
			for (int j = i * 2; j < n; j += i)
				a[j] = false;
}

bool a[1000000];
int b[1000000];

int main() {
	sieve(1000000, a);
	for (int i = 1; i < 1000000; i++)
		b[i] = b[i - 1] + (a[i] ? 1 : 0);
	int n;
	while (cin >> n) cout << b[n] << endl;
}