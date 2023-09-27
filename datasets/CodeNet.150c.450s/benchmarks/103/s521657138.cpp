#include <bits/stdc++.h>

using namespace std;

int n, s;

int dfs(int now, int sum, int i)
{
	if (sum > s) return 0;

	if (now == n) {
		if (sum == s) return 1;
		return 0;
	}

	int res = 0;

	for (int j = 0; j < 10; ++j) if (i < j) res += dfs(now + 1, sum + j, j);

	return res;
}

int main()
{
	while (cin >> n >> s, n || s) cout << dfs(0, 0, -1) << endl;
}