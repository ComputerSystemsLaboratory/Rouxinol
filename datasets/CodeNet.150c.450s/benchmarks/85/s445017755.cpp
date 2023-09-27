#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define INT_MIN -2147483646
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;

int memo[105][105];
int r[105], c[105];

int func(int a, int b) {
	if (memo[a][b] != INT_MIN) return memo[a][b];
	if (b - a == 0) { 
		memo[a][b] = 0;
	}
	else {
		int m = INT_MAX;
		for (int k = a;k < b;k++) {
			m = min(m, func(a, k) + func(k + 1, b) + r[a] * c[k] * c[b]);
		}
		memo[a][b] = m;
	}
	return memo[a][b];
}

int main() {
	int n;
	cin >> n;
	Loop(i, n) {
		Loop(j, n) {
			memo[i][j] = INT_MIN;
		}
	}
	Loop(i, n) {
		cin >> r[i] >> c[i];
	}
	cout << func(0, n - 1) << endl;
	return 0;
}