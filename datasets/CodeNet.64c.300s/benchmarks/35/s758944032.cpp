#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>

using namespace std;

static const int N = 100;

int main()
{
	int m[100][100];
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			m[i][j] = 0;
		}
	}

	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int u, d;
		cin >> u >> d;
		for (int i = 0; i < d; ++i)
		{
			int v; cin >> v;
			m[u - 1][v - 1] = 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << m[i][j];
			if (j != n - 1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}