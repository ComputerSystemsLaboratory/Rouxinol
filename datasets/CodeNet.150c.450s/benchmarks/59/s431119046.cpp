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
		cin >> v[i];
	}
	vector<int> v1(v);
	sort(v1.begin(), v1.end());

	auto show = [&]()
	{
		for (int i = 0; i < n; i++)
		{
			string s = (i == n - 1) ? "\n" : " ";
			cout << v[i] << s;
		}
	};

	for (int i = 1; i < n; i++)
	{
		show();
		if (v == v1)
		{
			return 0;
		}
		if (v[i - 1] < v[i])
		{
			continue;
		}
		//int temp = v[i];
		for (int j = i; j > 0; j--)
		{
			if (v[j - 1] > v[j])
			{
				swap(v[j - 1], v[j]);
			}
		}
	}
	show();
	return 0;
}