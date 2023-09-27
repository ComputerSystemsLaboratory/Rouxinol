#include<iostream>
using namespace std;

int main() {
	int month, day, date = 0;

	while (cin >> month >> day, month != 0) {
		while (month) {
			switch (month - 1)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				date += 31;
				break;
			case 2:
				date += 29;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				date += 30;
				break;
			default:
				break;
			}
			month--;
		}

		date += day;

		switch (date % 7)
		{
		case 1:
			cout << "Thursday" << endl;
			break;
		case 2:
			cout << "Friday" << endl;
			break;
		case 3:
			cout << "Saturday" << endl;
			break;
		case 4:
			cout << "Sunday" << endl;
			break;
		case 5:
			cout << "Monday" << endl;
			break;
		case 6:
			cout << "Tuesday" << endl;
			break;
		case 0:
			cout << "Wednesday" << endl;
			break;
		default:
			break;
		}
		date = 0;
	}
	return 0;
}