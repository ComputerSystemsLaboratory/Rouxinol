#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}
	for (int i = n - 1; i >= 1; --i)
	{
		cout << vec[i] << " ";
	}
	cout << vec[0] << endl;
}

int main()
{
	solve();
	return(0);
}