#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> R(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> R[i];
	}
	int ans = 0;
	int minv = R[0];
	int maxv = -2e9;
	for (int i = 1; i < n; ++i)
	{
		maxv = max(maxv, R[i] - minv);
		minv = min(minv, R[i]);
	}
	cout << maxv << endl;
}

int main()
{
	solve();
	return(0);
}