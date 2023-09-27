#include <iostream>
#include <string>
using namespace std;
enum TheDay {
	Monday = 0, 
	Tuesday = 1,
	Wednesday = 2,
	Thursday = 3,
	Friday = 4,
	Saturday = 5,
	Sunday = 6
};
string getTheDayString(TheDay d){
	switch(d){
	case Monday:	return "Monday";
	case Tuesday:	return "Tuesday";
	case Wednesday: return "Wednesday";
	case Thursday:	return "Thursday";
	case Friday:	return "Friday";
	case Saturday:	return "Saturday";
	case Sunday:	return "Sunday";
	}
	return "";
}
int main()
{
	int MD[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int MK[12] = {};
	MK[0] = 3;
	for(int i = 1; i < 12; ++i)
		MK[i] = (MK[i - 1] + MD[i - 1]) % 7;

	int m, d;
	while(cin >> m >> d){
		if(0 == m && 0 == d) break;
		TheDay a = (TheDay)((MK[m-1] + d - 1) % 7);
		cout << getTheDayString(a) << "\n";
	}
	return 0;
}