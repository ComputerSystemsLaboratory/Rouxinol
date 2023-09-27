#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <math.h>
#include <iomanip>
using namespace std;
#define Would
#define you
const int INF = 999999999;
const int MOD = 1e9 + 7;

int main() {
	while (1) {
		int n, k[1005], ans = INF;
		cin >> n;
		if (n == 0) { break; }
		for (int i = 0; i < n; ++i) {
			cin >> k[i];
		}
		sort(k, k + n);
		for (int i = 1; i < n; ++i) {
			ans = min(ans, abs(k[i] - k[i - 1]));
		}
		cout << ans << endl;
	}
}
