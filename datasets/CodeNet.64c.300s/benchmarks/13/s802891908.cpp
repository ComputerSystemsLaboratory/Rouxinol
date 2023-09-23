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


int fibo(int n)
{
	int a = 0;
	int b = 1;
	int ans;
	int i;

	if (n == 0 || n == 1) return (n);
	for (i = 2; i <= n; i++) {
		ans = a + b;
		a = b;
		b = ans;
	}
	return (ans);
}


int main(void)
{
	int n;

	cin >> n;
	cout << fibo(n + 1) << endl;

	return (0);
}