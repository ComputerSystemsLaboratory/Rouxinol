#include <iostream>

using namespace std;

int main()
{
	int n;
	char a;
	int b;
	int card[4][13] = { 0 };
	int i, j;

	while (1)
	{
		cin >> n;

		if (n <= 52 && n >= 0)
			break;
	}

	for (i = 0; i < n; i++)
	{
		while (1)
		{
			cin >> a >> b;
			if (a == 'S' || a == 'H' || a == 'C' || a == 'D')
			{
				if (b <= 13 && b > 0)
					break;
			}
		}

		if (a == 'S')
			card[0][b-1] = 1;
		else if (a == 'H')
			card[1][b-1] = 1;
		else if (a == 'C')
			card[2][b-1] = 1;
		else
			card[3][b-1] = 1;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (card[i][j] != 1)
			{
				if (i == 0)
					cout << "S " << j+1 << endl;
				else if (i == 1)
					cout << "H " << j+1 << endl;
				else if (i == 2)
					cout << "C " << j+1 << endl;
				else
					cout << "D " << j+1 << endl;
			}
		}
	}

	return 0;
}