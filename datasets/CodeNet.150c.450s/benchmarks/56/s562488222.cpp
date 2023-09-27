#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n, 0);
	for (int i = 0; i < n; ++i)
		cin >> skipws >> a[i];

	int min = 1000000;
	int max = -1000000;
	int64_t sum = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
			min = a[i];

		if (a[i] > max)
			max = a[i];

		sum += a[i];
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}