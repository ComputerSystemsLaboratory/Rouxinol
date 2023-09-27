#include <iostream>
#include <map>

using namespace std;

int main()
{
	int month = 0, day = 0, total_day = 0, week_num = 0;
	map<int, int> month_num;

	month_num[1] = 0;
	month_num[2] = 31;
	month_num[3] = 60;
	month_num[4] = 91;
	month_num[5] = 121;
	month_num[6] = 152;
	month_num[7] = 182;
	month_num[8] = 213;
	month_num[9] = 244;
	month_num[10] = 274;
	month_num[11] = 305;
	month_num[12] = 335;

	cin >> month >> day;

	while ( month * day != 0 )
	{
		total_day = month_num[month] + day-1;
		switch ( total_day % 7 )
		{
			case 0:
				cout << "Thursday" << endl;
				break;
			case 1:
				cout << "Friday" << endl;
				break;
			case 2:
				cout << "Saturday" << endl;
				break;
			case 3:
				cout << "Sunday" << endl;
				break;
			case 4:
				cout << "Monday" << endl;
				break;
			case 5:
				cout << "Tuesday" << endl;
				break;
			case 6:
				cout << "Wednesday" << endl;
				break;
			default:
				break;
		}
		cin >> month >> day;
	}

	return 0;
}