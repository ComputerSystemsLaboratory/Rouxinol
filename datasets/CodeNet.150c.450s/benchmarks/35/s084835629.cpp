#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		vector<int> v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		int d[5010];
		for (int i = 0; i < 5001; i++)d[i] = -200000;
		d[0] = v[0];
		for (int i = 1; i < n; i++)
		{
			d[i] = v[i];
			if (d[i] + d[i - 1] > d[i])
			{
				d[i] += d[i - 1];
			}
		}
		int ans = -2000000;
		for (int i = 0; i < n; i++)ans = max(ans, d[i]);
		cout << ans << endl;

	}
	return 0;
}