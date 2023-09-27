#include <iostream>
#include <string.h>
#define YEAR 6
using namespace std;

int main()
{
	int mouth[12] = {0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}, d, m, w;
	string week[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	while (cin >> m >> d && m && d) {
		w = 5;
		w = w + d + mouth[m-1] + YEAR;
		w = w % 7;
		cout << week[w] << endl;
	}
}