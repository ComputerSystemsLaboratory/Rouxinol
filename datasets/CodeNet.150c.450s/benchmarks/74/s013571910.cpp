#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> c(m), results(n+1);
	
	for (int i = 0; i < m; ++i)
		cin >> c[i];

	results[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		results[i] = n + 1;
		for (int j = 0; j < m; ++j)
		{
			if (i >= c[j])
			{
				int tmpCoins = results[i - c[j]] + 1;
				if (tmpCoins < results[i])
					results[i] = tmpCoins;
			}
		}
	}
	cout << results[n] << endl;
}