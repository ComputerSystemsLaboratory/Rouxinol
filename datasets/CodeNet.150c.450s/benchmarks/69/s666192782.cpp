#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int balls[10];

bool dfs(int i, int a, int b)
{
	if (i == 10) return true;
	bool ans = false;
	if (a < balls[i]) ans = dfs(i + 1, balls[i], b);
	if (b < balls[i]) ans = dfs(i + 1, a, balls[i]);
	return ans;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cin >> balls[j];
		}
		if (dfs(0, 0, 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}