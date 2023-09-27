#include <iostream>
using namespace std;
int main()
{
	int monthNum[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string dayName[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	int month, day, passDay=0;
	
	while (1) {
		cin >> month >> day;
		if (month == 0) break;
		
		for (int i=0; i<month; i++)
			passDay += monthNum[i];
		passDay += day-1;
		
		cout << dayName[passDay % 7] << endl;
		passDay = 0;
	}
	
	return 0;
}