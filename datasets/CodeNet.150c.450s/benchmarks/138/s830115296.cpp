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

int gcd(int x, int y)
{
	if (x > y)
	{
		swap(x, y);
	}
	return x ? gcd(x, y % x) : y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << gcd(x, y) << endl;
}
