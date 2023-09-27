#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>

using namespace std;

int day(int year) //??´???????????¨??´?????\???????????????
{
	int sum = 0;
	
	if (year % 3 == 0) {
		sum = 200;
	}
	else {
		sum = 195;
	}


	return (sum);
}

int main(void)
{
	int n;
	int i, j;
	int day;
	int year; //?????¬?????¢????????????????????´
	vector <int> y(150), m(150), d(150);

	cin >> n;

	

	for (i = 0; i < n; i++) {
		cin >> y[i] >> m[i] >> d[i];
	}

	for (i = 0; i < n; i++) {
		day = 0;
		if (y[i] % 3 == 0) {
			day = day + (20 - d[i] + 1);
			day = day + (10 - m[i]) * 20;

		}
		else {
			if (m[i] % 2 != 0) {//?\???°
				day = day + (20 - d[i] + 1);
				day = day + ((10 - m[i])/ 2 + 1) * 19 + ((10 - m[i]) / 2) * 20;
				day = day + 5;


			}
			else {
				day = day + (19 - d[i] + 1);
				day = day + ((10 - m[i]) / 2) * 20 + ((10 - m[i]) / 2) * 19;
				day = day + 5;
			}


		}
		year = (1000 - y[i] - 1);

		day = day + (year / 3) * 200;
		day = day + (year - year / 3) * 195;

		

		

		cout << day << endl;
 

	}




	return (0);
}