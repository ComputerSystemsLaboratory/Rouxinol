#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
const ll mod = ll(1e9) + 7;
const int INF = int(1e9);
int main()
{
	vector<int> ans_list;
	while (1)
	{
		int m;
		cin >> m;
		int n_min, n_max;
		if (m == 0)
			break;
		cin >> n_min >> n_max;
		n_min--;
		n_max--;
		vector<int> p(m);
		for (int i = 0; i < m; i++)
		{
			cin >> p[i];
		}
		sort(p.begin(), p.end(), greater<int>());
		int ans = 0, gap = 0;
		for (int i = n_min; i <= n_max; i++)
		{
			if (gap <= p[i] - p[i + 1])
			{
				gap = p[i] - p[i + 1];
				ans = i + 1;
			}
		}
		ans_list.push_back(ans);
	}
	for (int i = 0; i < ans_list.size(); i++)
		cout << ans_list[i] << endl;

	return 0;
}
