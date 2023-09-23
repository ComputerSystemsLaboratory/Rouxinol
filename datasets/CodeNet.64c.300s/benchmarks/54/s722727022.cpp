#include <iostream> 
using namespace std;


int main()
{
	long int memo[101][21] = {};
	int num[100];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	memo[0][num[0]] = 1;

	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			if (memo[i - 1][j] == 0) continue;
			if (j - num[i] >= 0) memo[i][j - num[i]] += memo[i - 1][j];
			if (j + num[i] <= 20) memo[i][j + num[i]] += memo[i - 1][j];
		}
	}

	cout << memo[n - 2][num[n - 1]] << endl;

	return 0;
}