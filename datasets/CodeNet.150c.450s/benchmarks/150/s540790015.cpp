#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <algorithm>
#include <functional>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
static const int VMAX = 10000;

void solve()
{
	int n;
	cin >> n;
	vector<int> A(n + 1);
	vector<int> B(n + 1);
	vector<int> C(VMAX + 1, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i + 1];
		C[A[i + 1]]++;
	}
	for (int i = 1; i <= VMAX; ++i)
	{
		C[i] += C[i - 1];
	}
	for (int i = 1; i <= n; ++i)
	{
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	for (int i = 1; i < n; ++i)
	{
		cout << B[i] << " ";
	}
	cout << B[n] << endl;
}

int main()
{
	solve();
	return(0);
}