#include <bits/stdc++.h>
#define INF 1000000001
using namespace std;

int main()
{
	int n;
	cin.sync_with_stdio(false);
	cin >> n;
	vector<int> dp(n + 1, INF);
	for (int i = 0, a; i < n; i++) {
		cin >> a;
		*lower_bound(dp.begin(), dp.end(), a) = a;
	}
	cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
	return 0;
}