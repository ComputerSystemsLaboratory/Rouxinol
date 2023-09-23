#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int F[45] = {};

int fib(int n) {
	if (n == 0 || n == 1)
		return F[n] = 1;
	else
		return F[n] ? F[n] : F[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	int n;	cin >> n;
	cout << fib(n) << endl;
	return 0;
}