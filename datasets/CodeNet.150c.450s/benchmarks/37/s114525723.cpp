#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

signed main()
{
    ios::sync_with_stdio(false);
	int a, b, c, d, e, f;
	while(cin >> a)
	{
		cin >> b >> c >> d >> e >> f;
		double m = a * e - b * d;
		double x = (c * e) /m -( b * f)/m;
		double y = (a * f) /m -( c * d)/m;

		printf("%.3lf %.3lf\n", x , y);
	}
}