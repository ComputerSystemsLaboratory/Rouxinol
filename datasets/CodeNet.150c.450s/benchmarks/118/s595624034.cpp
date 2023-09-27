#include <bits/stdc++.h>

using namespace std;

int number_of_day(int year, int month, int day) {
	int days = 0;
	
	for(int indexYear = year + 1; indexYear < 1000; ++indexYear)
		days += (indexYear % 3 == 0) ? 200 : 195;
		
	for(int indexMonth = month + 1; indexMonth <= 10; ++indexMonth) {
		if(year % 3 == 0)
			days += 20;
		else
			days += (indexMonth % 2 == 0) ? 19 : 20;
	}
	
	days += (year % 3 != 0 && month % 2 == 0) ? (20 - day) : (21 - day);
	
	return days;
}

int main() {
	int numero_caso;
	
	int year, month, day;
	
	cin >> numero_caso;
	
	for(int index = 0; index < numero_caso; ++index) {
		cin >> year >> month >> day;
		
		cout << number_of_day(year, month, day) << endl;
	}
	return 0;
}

