#include <bits/stdc++.h>
using namespace std;

int64_t	calc_partial_sum(int n, int k, const vector<int> &a_vec)
{
	int64_t	s = 0;
	int64_t	max_s = 0;
	for (int i = 0; i < k; ++i)
		s += a_vec.at(i);
	max_s = s;
	for (int i = k; i < n; ++i) {
		s += a_vec.at(i) - a_vec.at(i - k);
		if (max_s < s)
			max_s = s;
	}
	return max_s;
}

int	main()
{
	int	n, k;
	while (cin >> n >> k) {
		if (n == 0 && k == 0)
			break;
		vector<int>	a_vec(n);
		for (int i = 0; i < n; ++i)
			cin >> a_vec.at(i);
		cout << calc_partial_sum(n, k, a_vec) << endl;
	}
}

