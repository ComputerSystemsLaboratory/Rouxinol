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
	int minj = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		minj = i;
		bool flag = false;
		for (int j = i; j < n; j++)
		{
			if (v[j] < v[minj])
			{
				minj = j;
				flag = true;
			}
		}
		swap(v[i], v[minj]);
		if(flag)ans++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i];
		if (i == n - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	cout << ans << endl;
	return 0;
}