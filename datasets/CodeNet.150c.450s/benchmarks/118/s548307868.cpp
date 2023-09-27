#include<iostream>
using namespace std;

int main()
{
	int n;
	int y, m, d;
	cin >> n;
	int diff = 1;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			diff += 10 * 20;
		}
		else
		{
			diff += 5 * 19 + 5 * 20;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cin >> y >> m >> d;
		int sum = 0;
		for (int j = 1; j < y; j++)
		{
			if (j % 3 == 0)
			{
				sum += 10 * 20;
			}
			else
			{
				sum += 5 * 19 + 5 * 20;
			}
		}

		if (y % 3 == 0)
		{
			sum += ((m-1) * 20);
		}
		else
		{
			for (int j = 1; j < m; j++)
			{
				if (j % 2 == 0)
				{
					sum += 19;
				}
				else
				{
					sum += 20;
				}
			}
		}
		sum += d;
		cout << diff - sum << endl;
	}
	return 0;
}