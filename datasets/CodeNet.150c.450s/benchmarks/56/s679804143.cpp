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
	int min = 1000000000, max = -1000000000;
	long long int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (vec[i] < min)
		{
			min = vec[i];
		}
		if (vec[i] > max)
		{
			max = vec[i];
		}
		sum += vec[i];
	}
	cout << min << " " << max << " " << sum << endl;
}

int main()
{
	solve();
	return(0);
}