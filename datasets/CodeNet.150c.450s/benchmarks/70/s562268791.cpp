#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m, d, year;
	while(1){
		year = 2004;
		cin >> m >> d;
		if(m == 0 && d == 0){
			break;
		}
		if(m <= 2){
			m += 12;
			year -= 1;
		}
		int c = floor(year / 100);
		int gamma = 5 * c + floor(c / 4);
		int y = year % 100;
		int h = d + floor(26 * (m + 1) / 10) + y + floor(y / 4) + gamma;
		int day = h % 7;
		switch(day){
			case 0:
				cout << "Saturday" << endl;
				break;
			case 1:
				cout << "Sunday" << endl;
				break;
			case 2:
				cout << "Monday" << endl;
				break;
			case 3:
				cout << "Tuesday" << endl;
				break;
			case 4:
				cout << "Wednesday" << endl;
				break;
			case 5: 
				cout << "Thursday" << endl;
				break;
			case 6:
				cout << "Friday" << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}