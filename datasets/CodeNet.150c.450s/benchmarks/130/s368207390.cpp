#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	vector< vector<int> > a(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> skipws >> a[i][j];

	vector<int> b(m, 0);
	for (int i = 0; i < m; ++i)
		cin >> b[i];

	for (int i = 0; i < n; ++i)
	{
		int sum = inner_product(a[i].begin(), a[i].end(), b.begin(), 0);
		cout << sum << endl;
	}

	return 0;
}