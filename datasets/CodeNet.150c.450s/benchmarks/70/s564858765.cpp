#include<iostream>

using namespace std;

int main(void) {
	int m, d, day;
	string dstr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	while(true) {
		cin >> m >> d;
		if(m == 0) { break; }
		day = 0;
		switch(m) {
			case 12:
				day += 30;
			case 11:
				day += 31;
			case 10:
				day += 30;
			case 9:
				day += 31;
			case 8:
				day += 31;
			case 7:
				day += 30;
			case 6:
				day += 31;
			case 5:
				day += 30;
			case 4:
				day += 31;
			case 3:
				day += 29;
			case 2:
				day += 31;
			case 1:
				day += d;
				break;
		}
		cout << dstr[(day+9)%7] << endl;
	}

	return 0;
}