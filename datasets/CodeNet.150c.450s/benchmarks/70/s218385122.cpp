#include <iostream>
using namespace std;

int main()
{
	int month,day,tooshi;
	while(true)
	{
	cin >> month;
	cin >> day;
	if(month==0&&day==0)break;
	switch (month)
	{
		case 1:
		tooshi = day;
		break;
		case 2:
		tooshi = day+31;
		break;
		case 3:
		tooshi = day+60;
		break;
		case 4:
		tooshi = day+91;
		break;
		case 5:
		tooshi = day+121;
		break;
		case 6:
		tooshi = day+152;
		break;
		case 7:
		tooshi = day+182;
		break;
		case 8:
		tooshi = day+213;
		break;
		case 9:
		tooshi = day+244;
		break;
		case 10:
		tooshi = day+274;
		break;
		case 11:
		tooshi = day+305;
		break;
		case 12:
		tooshi = day+335;
		break;
	}

	switch (tooshi % 7)
	{
		case 0:
		cout << "Wednesday" << endl;
		break;
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
	}
	}
	return 0;
}