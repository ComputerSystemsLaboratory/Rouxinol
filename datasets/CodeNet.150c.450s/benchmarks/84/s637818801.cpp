#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <list>
#include <string.h>
#include <functional>
//#include <Windows.h>
//#include "Library.h"
//#include "Math.h"
using namespace std;
typedef long long int ll; typedef pair <int, int> P; typedef pair<int, P> P1; typedef vector <int> vecint; typedef vector <vecint> dvecint; typedef vector <dvecint> ddvecint;
const int INF = 2000000000;
const double EPS = 10e-9;
vecint a;
ll mergesort(vecint &a)
{
	int n = a.size();
	if (n <= 1) return 0;
	ll res = 0;
	vecint b(a.begin(), a.begin() + n / 2);
	vecint c(a.begin() + n / 2, a.end());
	res += mergesort(b);
	res += mergesort(c);
	int ai = 0, bi = 0, ci = 0;
	while (ai < n)
	{
		if (bi < b.size() && (ci == c.size() || b[bi] <= c[ci]))
		{
			a[ai++] = b[bi++];
		}
		else
		{
			a[ai++] = c[ci++];
			res += n / 2 - bi;
		}
	}
	return res;
}
int main()
{
	int n; cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << mergesort(a) << endl;
	return 0;
}