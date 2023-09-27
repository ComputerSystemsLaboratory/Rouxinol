#include <iostream>
#include <string>
using namespace std;

int main()
{
	int m, d;
	int a[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string dt[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	cin >> m >> d;

	while (m > 0 || d > 0) {
		for (int i = 0; i < m - 1; i++)
			d += a[i];

		d += 2;
		d %= 7;	

		cout << dt[d] << endl;

		cin >> m >> d;
	}

	return 0;
}
