#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int count = 0;
		int n, m;
		int x = 10, y = 10;
		bool table[21][21] = {};

		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++)
		{
			int X, Y;
			cin >> X >> Y;
			table[X][Y] = true;
		}

		cin >> m;
		for (int i = 0; i < m; i++)
		{
			char d;
			int p;
			cin >> d >> p;

			while (p--)
			{
				if (d == 'N') y++;
				if (d == 'E') x++;
				if (d == 'S') y--;
				if (d == 'W') x--;
				if (table[x][y]) count++;
				table[x][y] = false;
			}
		}

		if (count == n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}