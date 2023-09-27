#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n * m, 0);
	for (int i = 0; i < n; ++i)
		for (int j = i * m; j < (i * m + m); ++j)
			cin >> skipws >> a[j];

	vector<int> b(m, 0);
	for (int i = 0; i < m; ++i)
		cin >> b[i];

	for (int i = 0; i < n; ++i)
	{
		int sum = 0;

		for (int j = i * m; j < (i * m + m); ++j)
			sum += a[j] * b[j % m];

		cout << sum << endl;
	}

	return 0;
}