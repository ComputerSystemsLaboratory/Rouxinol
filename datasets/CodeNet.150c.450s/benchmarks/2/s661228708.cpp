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

int partition(vector<int>& A, const int p, const int r)
{
	int x = A[A.size() - 1];
	int i = p - 1;
	for (int j = p; j < r; ++j)
	{
		if (A[j] <= x)
		{
			++i;
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	int temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return(i + 1);
}

void solve()
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	int pos = partition(A, 0, n - 1);
	for (int i = 0; i < n - 1; ++i)
	{
		if (i == pos)
		{
			cout << "[" << A[i] << "] ";
		}
		else
		{
			cout << A[i] << " ";
		}
	}
	if (pos == n - 1)
	{
		cout << "[" << A[n - 1] << "]" << endl;
	}
	else
	{
		cout << A[n - 1] << endl;
	}
}

int main()
{
	solve();
	return(0);
}