//--------------------------------------------------template----------------------------------------//
//c
#include <stdio.h>
#include <time.h>
#include <math.h>
//c++
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <complex>
#include <cmath>
//c++11
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
//#define sort(v,n) sort(v,v+n)
//#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.rbegin(),v.rend())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
double a, b, c, d, e, f;
double x, y;
int main() {
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (c*e - b*f) / (a*e - b*d);
		y = (c - a*x) / b;
		if (x == -1 * x)x = 0.000;
		if (y == -1 * y)y = 0.000;
		printf("%.3f %.3f\n", x, y);
	}
}