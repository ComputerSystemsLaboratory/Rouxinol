#include <iostream>

using namespace std;

int main()
{
	unsigned long long debt = 100000;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		debt *= 1.05;
		const int mod = debt % 1000;
		if (mod != 0) {
			debt -= mod - 1000;
		}
	}
	cout << debt << endl;

	return 0;
}