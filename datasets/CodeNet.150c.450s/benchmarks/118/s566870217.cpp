#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int daycount(int year, int mon, int day) {
	int total = 0;
	int past_year = year-1;
	int past_mon = mon -1;

	if (past_year%3 == 0) {
		total += (past_year * 10 * 20) - (5 * 2 * (past_year/3)); 
	}else {
		total += (past_year * 10 * 20) - ((5 * 2 * (past_year/3))+5*(past_year%3)); 
	}		   		
	if (year%3 == 0) {
		total += past_mon * 20;
	}else {
		total += past_mon * 20 - (past_mon/2);
	}
	return total + (day-1);
}

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int Y,M,D;
		cin >> Y;
		cin >> M;
		cin >> D;
		
		cout << daycount(1000,1,1) - daycount(Y,M,D) << endl;
	}
	return 0;
}