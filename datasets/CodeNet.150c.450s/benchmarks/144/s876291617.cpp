#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	long gyoretsu0[100][100];
	long gyoretsu1[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> gyoretsu0[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> gyoretsu1[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l - 1; j++)
		{
			long sum = 0;
			for (int c = 0; c < m; c++)
			{
				sum += gyoretsu0[i][c] * gyoretsu1[c][j];
			}
			cout << sum << " ";
		}
		long sum = 0;
		int j = l - 1;
		for (int c = 0; c < m; c++)
		{
			sum += gyoretsu0[i][c] * gyoretsu1[c][j];
		}
		cout << sum << endl;
	}
}
