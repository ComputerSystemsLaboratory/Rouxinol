#include <iostream>

int main(){
	using namespace std;
	while(1){
	int month,day,year = 2004,mod;
	cin >> month >> day;
	if (month==0) break;
	else if (month<=2) {
		month += 12;
		year -= 1;
	}
	int k = year % 100;
	int j = year / 100;
	mod = (day+(((month+1)*26)/10)+k+(k/4)+(j/4)+5*j)%7;
	if (mod == 0) cout << "Saturday" << endl;
	else if (mod == 1) cout << "Sunday" << endl;
	else if (mod == 2) cout << "Monday" << endl;
	else if (mod == 3) cout << "Tuesday" << endl;
	else if (mod == 4) cout << "Wednesday" << endl;
	else if (mod == 5) cout << "Thursday" << endl;
	else if (mod == 6) cout << "Friday" << endl;
	}
	return 0;
}