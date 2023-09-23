#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int n, s;
int cnt = 0;

void dfs(int i, int sum, int c)
{
	if (c == n)
	{
		if (s == sum)
		{
			cnt++;
		}
		return;
	}

	if (i > 9)
	{
		return;
	}

	dfs(i + 1, sum, c);

	dfs(i + 1, sum + i, c + 1);

	return;
}

int main()
{
	for (; cin >> n >> s;)
	{
		cnt = 0;
		if (n == 0 && s == 0)
		{
			break;
		}
		dfs(0, 0, 0);

		cout << cnt << endl;
	}
}
