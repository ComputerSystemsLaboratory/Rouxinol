#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, mini, res, R;
	cin >> n >> mini >> R;
	res = R - mini;
	mini = min(mini, R);
	for (int i = 2; i < n; i++) {
		cin >> R;
		res = max(res, R - mini);
		mini = min(mini, R);
	}
	cout << res << endl;
	return 0;
}