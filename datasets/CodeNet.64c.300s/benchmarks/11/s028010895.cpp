#include <iostream>
using namespace std;

int main()
{
	int s;
	cin >> s;
	if (s < 0 || s > 86400) {
		cout << "invalid second minutes.\n";
	} else {
		int h = s / 3600;
		int h_mod = s % 3600;
		int m = h_mod / 60;
		int s = h_mod % 60;

		cout << h << ":" << m << ":" << s << "\n";
	}

	return 0;
}