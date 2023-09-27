#include <vector>
#include <iostream>

using namespace std;

int N;

int main()
{
	cin >> N;

	vector<vector<bool> > M(N, vector<bool>(N));

	int u, k, v;

	for (int i = 0; i < N; i++)
	{
		cin >> u >> k;

		for (int i = 0; i < k; i++)
		{
			cin >> v;

			M[u - 1][v - 1] = true;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << M[i][j];

			if (j != N - 1)
			{
				cout << ' ';
			}
		}

		cout << endl;
	}

	return 0;
}