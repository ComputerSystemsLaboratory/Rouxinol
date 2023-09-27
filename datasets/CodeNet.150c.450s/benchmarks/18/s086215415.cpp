#include <iostream>
using namespace std;

int main() {
	int week;
	cin >> week;
	int debt = 100;
	for (int i = 0; i < week; i++)
	{
		debt = ((debt * 105) / 100) + ((debt % 20) > 0 ? 1 : 0);
	}
	cout << debt << "000" << endl;

	return 0;
}