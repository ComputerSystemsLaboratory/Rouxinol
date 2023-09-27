//0027 What day is today?

//2004N11ú`1231úÜÅÌútðüÍµ½Æ«A»Ìjúð¦Ä­¾³¢
//È¨2004N11úÍØjúÅA2004NÍ[NÅ·

#include<iostream>
#include<numeric>
using namespace std;

int main(void)
{
	const char* week[] = 
	{
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday",
	};
	//indexÌú
	const int days[13] = 
	{
		0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	//indexÌ1úÌA11ú©çÌoßú
	int elapsedDays[13];
	partial_sum(days, days+13, elapsedDays);

	int month, day;
	
	while(cin >> month >> day, month)
	{
		cout << week[ (elapsedDays[month-1] + day + 2) %  7] << endl;
	}
	return 0;
}