#include <iostream>

using namespace std;

int A[10];

bool dfs(int n, int a, int b)
{
	if (n == 10)
	{
		return true;
	}

	if (a < A[n])
	{
		if (dfs(n + 1, A[n], b) == true) { return true; }
	}
	
	if (b < A[n])
	{
		if (dfs(n + 1, a, A[n]) == true) { return true; }
	}

	return false;
}

int main()
{
	const int DATASETS = 1000;

	int N;

	bool check[DATASETS];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> A[j];
		}

		check[i] = dfs(0, 0, 0);
	}

	for (int i = 0; i < N; i++)
	{
		cout << (check[i] ? "YES" : "NO") << endl;
	}

	return 0;
}