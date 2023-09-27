#include <iostream>
#include <string>

using namespace std;

int main()
{ 
	const string day[7] = {  "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
	const int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month, date;

	while (cin >> month >> date, month)
	{
		int sum = 0;
		for (int i = 1; i < month; ++i)
			sum += days[i - 1];

		sum += date;
		cout << day[sum % 7] << endl;
	}

	return 0;
}