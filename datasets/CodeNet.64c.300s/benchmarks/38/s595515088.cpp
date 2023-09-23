#include <bits/stdc++.h>

using namespace std;

int b[10];

bool dfs(int idx, int left, int right)
{
	if (idx == 10) return true;

	if (b[idx] > left && dfs(idx + 1, b[idx], right)) return true;
	if (b[idx] > right && dfs(idx + 1, left, b[idx])) return true;

	return false;
}

int main()
{
	int n; cin >> n;
	while (n--) {
		for (int i = 0; i < 10; ++i) cin >> b[i];

		cout << (dfs(0, 0, 0) ? "YES" : "NO") << endl;
	}
}