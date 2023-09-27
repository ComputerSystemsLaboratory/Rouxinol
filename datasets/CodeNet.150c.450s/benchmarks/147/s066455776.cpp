#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>

typedef unsigned long long ULLONG;
typedef long long LLONG;
static const LLONG MOD_NUM = 1000000007; //998244353;

template<class _T> static void get(_T& a) {
	std::cin >> a;
}
template<class _T> static void get(_T& a, _T& b) {
	std::cin >> a >> b;
}
template<class _T> static void get(_T& a, _T& b, _T& c) {
	std::cin >> a >> b >> c;
}

static void exec();

int main()
{
	exec();
	fflush(stdout);
	return 0;
}

static void exec()
{
	int N;
	get(N);

	std::vector<LLONG> fn(N + 1, 0);
	for (int x = 1; x * x <= N; x++) {
		for (int y = 1; (x * x) + (y * y) <= N; y++) {
			for (int z = 1; ((x * x) + (y * y) + (z * z) + x * y + y * z + z * x) <= N; z++) {
				LLONG n = (x * x) + (y * y) + (z * z) + x * y + y * z + z * x;
				fn[n]++;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		printf("%lld\n", fn[i]);
	}
}
