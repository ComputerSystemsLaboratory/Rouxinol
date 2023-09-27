#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int mn;
	cin >> mn;
	int ans = -1e9;
	for(int i = 1; i < n; i++)
	{
		int r;
		cin >> r;
		ans = max(ans, r - mn);
		mn = min(r, mn);
	}
	cout << ans << "\n";
}

