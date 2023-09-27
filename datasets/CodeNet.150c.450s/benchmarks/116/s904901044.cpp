#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional> //sort(A,A.end(),greater<int>());???????????????
#include <queue>
#include <stack>
#include <vector>

#define INF 10 << 10

int a[100001];

int main() {
	int n, k;
	while (cin >> n >> k && n != 0 && k != 0) {
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			a[i] += a[i - 1];
		}
		int ans = 0;
		for (int i = 0; i < n - k; ++i) {
			ans = max(ans, a[i + k] - a[i]);
		}
		cout << ans << endl;
	}

	return 0;
}