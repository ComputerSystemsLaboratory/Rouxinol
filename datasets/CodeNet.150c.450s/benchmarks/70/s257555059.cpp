#include <iostream>
using namespace std;

int main() {
	int month, day;
	while(1) {
		cin >> month >> day;
		if(month == 0) break;
		else {
			int counter = 1;
			int numDay = 0;
			while(1) {
				if(month == counter) {
					numDay += day;
					break;
				}
				else {
					if(counter == 1 || counter == 3 || counter == 5 || counter == 7 || counter == 8 || counter == 10 || counter == 12) {
						numDay += 31;
						counter++;
					}
					else if(counter == 2){
						numDay += 29;
						counter++;
					}
					else {
						numDay += 30;
						counter++;
					}
				}
			}
			if(numDay % 7 == 1) cout << "Thursday" << endl;
			else if(numDay % 7 == 2) cout << "Friday" << endl;
			else if(numDay % 7 == 3) cout << "Saturday" << endl;
			else if(numDay % 7 == 4) cout << "Sunday" << endl;
			else if(numDay % 7 == 5) cout << "Monday" << endl;
			else if(numDay % 7 == 6) cout << "Tuesday" << endl;
			else cout << "Wednesday" << endl;
		}
	}
	return 0;
}