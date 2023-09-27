#include <iostream>
#include <string>

using namespace std;

int main (void) {
	int months[12];
	
	months[ 1 - 1] = 31;
	months[ 2 - 1] = 29;
	months[ 3 - 1] = 31;
	months[ 4 - 1] = 30;
	months[ 5 - 1] = 31;
	months[ 6 - 1] = 30;
	months[ 7 - 1] = 31;
	months[ 8 - 1] = 31;
	months[ 9 - 1] = 30;
	months[10 - 1] = 31;
	months[11 - 1] = 30;
	months[12 - 1] = 31;
	
	string days[7] = {
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday"
	};
	
	for (;;) {
		int m, d, dSum;
		cin >> m;
		cin >> d;
		
		if (m == 0 && d == 0) {
			break;
		}
		
		dSum = 0;
		for (int i = 0; i < m - 1; i ++) {
			dSum += months[i];
		}
		
		dSum += d - 1;
		
		cout << days[dSum % 7] << endl;
	}
	
	return 0;
}