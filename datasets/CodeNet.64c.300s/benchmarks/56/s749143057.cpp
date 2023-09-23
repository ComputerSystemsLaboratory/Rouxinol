#include <iostream>
using namespace std;

int main()
{
	int	Millennium = 1;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)
			Millennium += 200;
		else
			Millennium += 195;
	}

	int n;
	cin >> n;
	while (n--)
	{
		int day = 0;
		int y, m, d;
		cin >> y >> m >> d;

		for (int i = 1; i < y; i++)
		{
			if (i % 3 == 0)
				day += 200;
			else
				day += 195;
		}
		if (y % 3 == 0)
		{
			day += (m - 1) * 20;
		}
		else
		{
			int EvenMonth = (m - 1) / 2;
			day += EvenMonth * 19;
			day += (m - 1 - EvenMonth) * 20;
		}
		day += d;

		cout << Millennium - day << endl;
	}

	return 0;
}