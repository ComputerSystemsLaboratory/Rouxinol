#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
//const lld MAXN = 1e9;

int fib[45] = {0};

int f(int n)
{
	if (n == 0 || n == 1)
	{
		fib[n] = 1;
		return fib[n];
	}else
	{
		if (fib[n] != 0)
		{
			return fib[n];
		}
		fib[n] = f(n-1) + f(n-2);
		return fib[n];
	}
}

int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;

	return 0;
}