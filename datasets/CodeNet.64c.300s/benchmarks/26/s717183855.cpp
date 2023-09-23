#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 2147483647
 
using namespace std;

int pos(long long x, long long n)
{
	long long res;
	if (n == 0) return (1);
	
	res = (unsigned long long)pos(x * x % 1000000007, n / 2);
	if (n % 2 == 1) res = res * x % 1000000007;
 
	return (res);
}

int main(void)
{
	int m, n;
	
	cin >> m >>n;

	cout << pos(m, n) << endl;

	return (0);
}