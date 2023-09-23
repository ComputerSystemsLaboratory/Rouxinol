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

int A[31] = { 1,1 };

int a(int n) {
	if (A[n])return A[n];
	if (n - 1 >= 0)A[n] += A[n - 1] ? A[n - 1] : a(n - 1);
	if (n - 2 >= 0)A[n] += A[n - 2] ? A[n - 2] : a(n - 2);
	if (n - 3 >= 0)A[n] += A[n - 3] ? A[n - 3] : a(n - 3);
	return A[n];
}

int main() {
	for (int n; cin >> n&&n;)
		cout << ceil((double)a(n) / (365 * 10)) << endl;
	return 0;
}