#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int min1, min2, min3;

	cin >> a;

	min1 = a;

	cin >> b;

	if (min1 > b) {
		min2 = min1;
		min1 = b;
	} else {
		min2 = b;
	}

	cin >> c;

	if (min1 > c) {
		min3 = min2;
		min2 = min1;
		min1 = c;
	} else if (min2 > c) {
		min3 = min2;
		min2 = c;
	} else {
		min3 = c;
	}

	cout << min1 << " " << min2 << " " << min3 << endl;

	return 0;
}