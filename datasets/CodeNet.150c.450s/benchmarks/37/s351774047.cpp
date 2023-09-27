#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<utility>
#include<stack>
#include<queue>

#define FOR(i, a, b) for(int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(int i=(a);i>=(b);i--)
#define MOD 1000000007

using namespace std;

int main(void) {
	double a, b, c, d, e, f;
	double x, y;
	while (cin >> a >> b >> c >> d >> e >> f) {
		x = (c*e - b*f) / (a*e - b*d);
		y = (c*d - a*f) / (b*d - a*e);
		if (x == -0) {
			x = 0;
		}
		if (y == -0) {
			y = 0;
		}
		printf("%.3lf ", x);
		printf("%.3lf\n", y);
	}
	return 0;
}