#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
using namespace std;

vector<bool> Prime;
void initPrime(long num) {
	Prime = vector<bool>(num + 1, true);
	Prime[1] = Prime[0] = false;
	long sq_num = sqrt((double)num);
	for (long i = 2; i < sq_num; i++) {
		if (Prime[i]) {
			for (long j = i + i; j <= num; j += i) {
				Prime[j] = false;
			}
		}
	}
}

int main(void) {
	initPrime(1000000);
	int a, d, n;
	while (cin >> a >> d >> n, a) {
		long res = a;
		for (int i = 0; i < n; i++) {
			while (!Prime[res]) {
				res += d;
			}
			if (i != n - 1) {
				res += d;
			}
		}
		cout << res << endl;
	}

	return 0;
}