#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	while (cin >> n, n)
	{
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int minv = a[1] - a[0];
		for (int i = 1; i < n - 1; ++i)
		{
			minv = min(minv, a[i + 1] - a[i]);
		}
		cout << minv << endl;
	}
}

int main()
{
	solve();
	return(0);
}