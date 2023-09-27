#include <iostream>
#include <string>
using namespace std;
int main( void )
{
	int days[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string d[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

	while (1)
	{
		int month;
		int day;
		cin >> month >> day;
		if ( month == 0 && day == 0 )
			break;

		for ( int i = 1; i < month; i++ )
		{
			day += days[i];
		}

		day--;
		int index = day % 7;
		cout << d[index] << endl;

	}

	return 0;
}