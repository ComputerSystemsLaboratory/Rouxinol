#include <iostream>

using namespace std;

int combination(int n)
{
	int count = 0;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					if (i + j + k + l == n)
					{
						count++;
					}
				}
			}
		}
	}
	return count;
}

int main()
{
	int n;
	while (cin >> n, !cin.eof())
	{
		cout << combination(n) << endl;
	}
	return 0;
}
