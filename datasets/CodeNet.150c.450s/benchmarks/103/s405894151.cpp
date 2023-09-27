#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int n, s;

bool used[10];

lli dfs(bool used[10], int now, int sum)
{
	if (sum > s) return 0;

	if (now == n) {
		if (sum == s) return 1;
		return 0;
	}

	int res = 0;

	for (int i = 0; i < 10; ++i) {
		if (used[i]) continue;
		used[i] = true;
		res += dfs(used, now + 1, sum + i);
		used[i] = false;
	}

	return res;
}

lli fact(int n)
{
	if (n <= 1) return 1;
	return n * fact(n - 1);
}

int main()
{
    int f[10];
    for(int i = 1; i < 10; ++i) f[i] = fact(i);
	while (cin >> n >> s, n || s) {
		memset(used, false, sizeof(used));
        cout << dfs(used, 0, 0) / f[n] << endl;
	}
}