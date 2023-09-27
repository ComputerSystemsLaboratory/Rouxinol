#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>

int main()
{
	while (1)
	{
		int n, k;
		std::cin >> n >> k;

		if (n == 0 && k == 0)
			break;

		std::vector<int> vec(n);
		for (int i = 0; i != n; ++i)
			std::cin >> vec[i];

		int s = 0;
		for (int i = 0; i != k; ++i)
			s += vec[i];

		int m = std::numeric_limits<int>::min();
		m = std::max(s, m);
		for (int i = 0; i != n - k; ++i)
		{
			s -= vec[i];
			s += vec[i + k];
			m = std::max(s, m);
		}

		std::cout << m << std::endl;
	}
	return 0;
}