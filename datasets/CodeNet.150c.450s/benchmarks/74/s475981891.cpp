#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <string>
#include <sstream>
#include <algorithm>
#include <random>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cassert>
#include <climits>
#include <thread>

#define FOR_LT(i, beg, end) for (int i = beg; i < end; i++)
#define FOR_LE(i, beg, end) for (int i = beg; i <= end; i++)
#define FOR_DW(i, beg, end) for (int i = beg; end <= i; i--)

using namespace std;

int main()
{
	int n, m; cin >> n >> m;;

	vector<int> ms(m);
	for (auto& coin : ms) {
		cin >> coin;
	}
	sort(ms.begin(), ms.end(), greater<int>());

	array<int, 50001> dp = { 0 };
	FOR_LE(i, 1, n) {
		int min_c = INT_MAX;
		FOR_LT(c, 0, m) {
			if (i - ms[c] < 0) continue;
			min_c = min(min_c, dp[i - ms[c]] + 1);
		}
		dp[i] = min_c;
	}

	cout << dp[n] << endl;


	return 0;
}
