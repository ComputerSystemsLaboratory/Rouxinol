#include <iostream>
#include <string>
using namespace std;

int main(){
	int m[13], mm, dd, i;
	m[0] = 0;
	m[1] = m[0];
	m[2] = m[1] + 31;
	m[3] = m[2] + 29;
	m[4] = m[3] + 31;
	m[5] = m[4] + 30;
	m[6] = m[5] + 31;
	m[7] = m[6] + 30;
	m[8] = m[7] + 31;
	m[9] = m[8] + 31;
	m[10] = m[9] + 30;
	m[11] = m[10] + 31;
	m[12] = m[11] + 30;

	string day[7];
	day[0] = "Wednesday";
	day[1] = "Thursday";
	day[2] = "Friday";
	day[3] = "Saturday";
	day[4] = "Sunday";
	day[5] = "Monday";
	day[6] = "Tuesday";

	while (true)
	{
		cin >> mm >> dd;
		if (mm == 0) { break; }
		i = (m[mm] + dd) % 7;
		cout << day[i] << endl;
	}
	return 0;
}