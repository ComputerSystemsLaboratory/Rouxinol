#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <utility>
#include <numeric>

using namespace std;
typedef long long llong;

#define MOD 1000000000 + 7

bool is_prime(int n)
{
	if (n == 2)
	{
		return true;
	}
	else if ((n == 1) || (n % 2 == 0))
	{
		return false;
	}

	int p = (int)sqrt(n);
	for (int i = 3; i <= p; i += 2)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	int cnt = 0;
	for (cin >> n; n--;)
	{
		int x;
		cin >> x;

		if (is_prime(x))
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}
