#include <iostream>
using namespace std;

int main() {
	char *weekday[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };
	int monthdays[12] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

	int m, d;
	while (cin >> m >> d, m) {
		int w = d-1;
		for (int i = 1; i < m; i++)
			w += monthdays[i];
		cout << weekday[w%7] << endl;
	}
	
	return 0;
}