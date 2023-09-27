#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int n;
int s;
int ans;

void dfs(int i, int sumCount, int sum)
{
	if (sum == s && sumCount == n)
	{
		++ans;
		return;
	}
	if (i == 10 || sumCount == n)
	{
		return;
	}

	dfs(i + 1, sumCount + 1, sum + i);
	dfs(i + 1, sumCount, sum);
	return;
}

int main()
{
	while (true)
	{
		ans = 0;
		cin >> n >> s;
		if (n == 0 && s == 0) return 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
	return 0;
}