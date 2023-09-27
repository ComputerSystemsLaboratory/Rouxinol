#include <iostream>

using namespace std;


int totalDate(int month, int date)
{
	static const int MONTH[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int sum = 0;
	for(int i = 0; i < month-1; i++)
		sum += MONTH[i];

	return sum + date;
}

const char* day(int total_date)
{
	static const char* DAY[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

	return DAY[(total_date-1)%7];
}

int main()
{
	while(true)
	{
		int month, date;
		cin >> month >> date;

		if(month == 0)
			break;

		cout << day(totalDate(month, date)) << endl;
	}

	return 0;
}