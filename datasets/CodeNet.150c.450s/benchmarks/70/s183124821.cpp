#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int dayNum[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = { "Monday",
				  "Tuesday",
				  "Wednesday",
				  "Thursday",	// <- 2004/1/1
				  "Friday",
				  "Saturday",
				  "Sunday" };

int main() {
	int m, d;
	
	cin >> m >> d;
	
	while (m != 0 && d != 0) {
		int daySum = 0;
		
		for (int i = 0; i < m - 1; i++) {
			daySum += dayNum[i];
		}
		
		daySum += d;
		
		cout << day[ (daySum + 2) % 7 ] << endl;
		
		cin >> m >> d;
	}
	
	return 0;
}