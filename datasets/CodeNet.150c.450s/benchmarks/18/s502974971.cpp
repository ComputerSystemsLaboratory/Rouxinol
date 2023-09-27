#include <iostream>
using namespace std;

int main() {
	int week;
	cin >> week;
	int debt = 100;
	while (week--)
	{
		debt = ((debt * 105) / 100) + ((debt % 20) > 0 ? 1 : 0);
	}
	cout << debt * 1000 << endl;

	return 0;
}