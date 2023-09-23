#include <iostream>
using namespace std;

int day(int y, int m, int d)
{
	int day = 0;
	day += (y - 1) * 195 + (y - 1) / 3 * 5;
	day += (y % 3 == 0) ? (m - 1) * 20 : (m - 1) * 20 - (m - 1) / 2;
	day += d;
	return day;
}

int main()
{
	int n, Y, M, D;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Y >> M >> D;
		cout << day(1000, 1, 1) - day(Y, M, D) << endl;
	}
	return 0;
}