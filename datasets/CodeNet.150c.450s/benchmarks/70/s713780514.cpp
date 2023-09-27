#include <string>
#include <iostream>

using namespace std;

int main()
{
	int M[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	string D[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };

	int MM = -1, DD = -1, DAYS = -1;

	while (true)
	{
		cin >> MM >> DD;

		if (MM == 0 && DD == 0)
		{
			goto Exit;
		}

		DAYS = 0;

		for (int i = 0; i < (MM - 1); i++)
		{
			DAYS += M[i];
		}

		DAYS += DD;

		cout << D[DAYS % 7] << endl;
	}

Exit:;

	return 0;
}