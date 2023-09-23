#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <cstdio>
#include <stack>
using namespace std;

// Sum of Integers(0030)
int n, s;

int solve(int i, int sum, int c)
{
	if (c == n) {
		if (sum == s)
			return 1;
		return 0;
	}

	if (i > 9)
		return 0;

	return solve(i+1, sum+i, c+1) + solve(i+1, sum, c);
}

int main()
{
	while (cin >> n >> s) {
		if (n == 0 && s == 0)
			break;
		cout << solve(0, 0, 0) << endl;
	}
	return 0;
}