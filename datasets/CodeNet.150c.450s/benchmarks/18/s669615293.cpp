#include <iostream>

using namespace std;

int main(void) {
	int n;

	cin >> n;

	int debt = 100000;
	for (int i = 1; i <= n; i++) {
		debt = (debt * 1.05);
		if (debt % 1000) {
			debt /= 1000;
			debt *= 1000;
			debt += 1000;
		}
	}

	cout << debt << endl;

	return 0;
}