#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define reps(i, f, n)	for (int i = f; i < (int)(n); ++i)
#define rep(i, n)		reps (i, 0, n)

int main()
{
	int n, m, p, x[111];
	while (cin >> n >> m >> p, n) {
		--m;
		int sum = 0;
		rep (i, n) cin >> x[i];
		rep (i, n) sum += x[i];
		cout << (x[m] ? (int)floor(sum * (100 - p) / x[m]) : 0) << endl;
	}
}