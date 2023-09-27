#include<bits/stdc++.h>
using namespace std;

int main(void){
	while(1){
		int month, day;
		int days_from_new_year = 0;
		cin >> month >> day;
		if(month == 0 && day == 0) break;
		for(int i = 1; i < month; i++){
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) days_from_new_year += 31;
			else if(i == 4 || i == 6 || i == 9 || i == 11) days_from_new_year += 30;
			else if(i == 2) days_from_new_year += 29;
		}
		days_from_new_year += day;
		int mod = days_from_new_year % 7;
		if(mod == 0) cout << "Wednesday";
		else if(mod == 1) cout << "Thursday";
		else if(mod == 2) cout << "Friday";
		else if(mod == 3) cout << "Saturday";
		else if(mod == 4) cout << "Sunday";
		else if(mod == 5) cout << "Monday";
		else if(mod == 6) cout << "Tuesday";
		cout << endl;
	}
	return 0;
}