#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	int r = 0;
	int p = 0;
	int c = 0;

	int deck[50] = {};
	int tmp[50] = {};

	while (true)
	{
		cin >> n;
		cin >> r;
		if (n == 0 && r == 0)break;
		for (int i = 0; i < n; i++)
		{
			deck[i] = n - i;
		}

		for (int i = 0; i < r; i++)
		{
			cin >> p;
			cin >> c;

			for (int j = 0; j < p - 1; j++)
			{
				tmp[j] = deck[j];
			}

			for (int j = 0; j < c; j++)
			{
				deck[j] = deck[p - 1 + j];
			}


			for (int j = 0; j < p - 1; j++)
			{
				deck[c + j] = tmp[j];
			}
		}
		cout << deck[0] << endl;
	}
	return 0;
}