#include <iostream>

using namespace std;

int debtAfterWeek(int n)
{
	int debt = 100000;
	int last3digits;
	for (int i = 0; i < n; i++)
	{
		debt *= 1.05;
		last3digits = debt % 1000;
		debt -= last3digits;
		if (last3digits != 0)
		{
			debt += 1000;
		}
	}
	return (int)debt;
}

int main()
{
	int n;
	cin >> n;
	cout << debtAfterWeek(n) << endl;
	return 0;
}
