#include <iostream>

using namespace std;

int main()
{
	int month, day, youbi;

	while(cin >> month >> day)
	{
		if(month == 0 && day == 0)    break;

		int year = 2004;
		
		if(month == 1){
			year = 2003;
			month = 13;
		}
		if(month == 2){
			year = 2003;
			month = 14;
		}

		year %= 100;

		youbi = (day + ((26*(month+1))/10) + year + (year/4) - 2*(year/100) + (year/100)/4);

		switch(youbi%7)
		{
			case 1: cout << "Sunday" << endl; break;
			case 2: cout << "Monday" << endl; break;
			case 3: cout << "Tuesday" << endl; break;
			case 4: cout << "Wednesday" << endl; break;
			case 5: cout << "Thursday" << endl; break;
			case 6: cout << "Friday" << endl; break;
			case 0: cout << "Saturday" << endl; break;
		}
	}

	return 0;
}