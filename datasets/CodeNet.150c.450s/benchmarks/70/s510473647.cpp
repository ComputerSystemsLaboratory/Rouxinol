#include <iostream>

using namespace std;

int main() {
	int M, D, days;
	int daysOfMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string daysOfWeek[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	while (1) {
		cin >> M >> D;
		if (M == 0 && D == 0)
			break;
		days = 0;
		for (int i = 0; i < M; i++)
			days += daysOfMonth[i];
		days += D;
		cout << daysOfWeek[days % 7] << endl;
	}
	return 0;
}