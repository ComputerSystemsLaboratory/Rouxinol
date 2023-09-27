#include <iostream>
using namespace std;

int main()
{
	unsigned n, money = 100000;
	for (cin >> n; n; n--) {
		money *= 1.05;
		if (money % 1000) {
			money = money - money % 1000 + 1000;
		}
	}
	cout << money << endl;
	return 0;
}