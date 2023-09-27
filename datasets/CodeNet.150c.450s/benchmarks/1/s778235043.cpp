#include <bits/stdc++.h>
using namespace std;

int	main()
{
	const static int upper = 1e+9 + 1;
	int	n;
	cin >> n;
	vector<int>	tail_vec(n, upper);
	int	a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		*lower_bound(tail_vec.begin(), tail_vec.end(), a) = a;
	}
	auto	end = lower_bound(tail_vec.begin(), tail_vec.end(), upper);
	int	max_len = end - tail_vec.begin();
	cout << max_len << endl;
}


