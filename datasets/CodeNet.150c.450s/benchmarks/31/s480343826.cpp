#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v[i] = t;
	}
	int maxv = v[1] - v[0], minv = v[0];

	for (int i = 1; i < n - 0; i++)
	{
		maxv = max(maxv, v[i] - minv);
		minv = min(minv, v[i]);
	}

	cout << maxv << endl;
	return 0;
}