#include <iostream>
#include <cstdint>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;

	vector< vector<int> > A(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> skipws >> A[i][j];

	vector< vector<int> > B(l, vector<int>(m, 0));
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < l; ++j)
			cin >> skipws >> B[j][i];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < l; ++j)
		{
			// For integer.
			// int sum = inner_product(A[i].begin(), A[i].end(), B[j].begin(), 0);

			// For 64bit integer.
			int64_t sum = 0;
			for (int k = 0; k < m; ++k)
				sum += A[i][k] * B[j][k];

			cout << sum << (j != l - 1 ? " " : "\n");
		}

	return 0;
}