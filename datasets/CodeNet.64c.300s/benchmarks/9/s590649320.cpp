#include <iostream>
using namespace std;

int main() {
	int week;
	cin >> week;
	int debt = 100000;
	while (week--)
	{
		int rem = debt % 20000;
		debt = ((int)(debt * 1.05) / 1000) * 1000;
		if (rem > 0) { debt += 1000; }
	}
	cout << debt << endl;

	return 0;
}