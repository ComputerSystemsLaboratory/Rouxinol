#include <iostream>
#include <string>
using namespace std;

string days[7] =
{
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday",
	"Monday",
	"Tuesday"
};

int daysPerMonth[11] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

int main()
{
	int m, d;
	while (cin >> m >> d, m + d)
	{
		int day = 0;
		for (int i = 0; i < m - 1; i++)
		{
			day += daysPerMonth[i];
		}
		day += d;

		cout << days[day % 7] << endl;
	}

	return 0;
}