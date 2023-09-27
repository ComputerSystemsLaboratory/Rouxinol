#include <iostream>
using namespace std;

int main() {
	int week;
	cin >> week;
	int debt = 100000;
	while (week--)
	{
		debt = debt * 1.05;
		int rem = debt % 1000;
		if (rem > 0) {
			debt += (1000 - rem);
		}

	}
	cout << debt << endl;

	return 0;
}