#include<bits/stdc++.h>
using namespace std;

int a[20];

bool check(int x)
{
	int pre = 0;
	for (int i = 0; i < 10; i++) if (x & (1 << i))
	{
		if (a[i] < pre) return false;
		pre = a[i];
	}
	return true;
}

bool dfs(int i, int x, int pre)
{
	if (i == 10)
	{
		return check(x);
	}
	bool temp = false;
	if (a[i] > pre) temp = dfs(i + 1, x, a[i]);
	return temp || dfs(i + 1, x | (1 << i), pre);
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		for (int i = 0; i < 10; i++) scanf("%d", &a[i]);
		printf("%s\n", dfs(1, 0, a[0]) ? "YES" : "NO");
	}
	return 0;
}