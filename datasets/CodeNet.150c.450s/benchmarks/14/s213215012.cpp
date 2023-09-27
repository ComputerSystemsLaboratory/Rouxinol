#include <iostream>
using namespace std;
bool has3(int x1) {
	while (x1) {
		if (x1 % 10 == 3)return true;
		x1 /= 10;
	}
	return false;
}

int main()
{
	int x;
	cin >> x;
	for (int i = 3; i <= x; i++) {
		if (i% 3 == 0 || has3(i)) {
			cout << " " << i;

		}
	}
	cout << endl;
	return 0;
}