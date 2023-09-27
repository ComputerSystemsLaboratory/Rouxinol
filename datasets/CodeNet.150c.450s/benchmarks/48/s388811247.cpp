#include <iostream>
using namespace std;

int main()
{
	int e, m, x;
	while (cin >> e, e) {
		m = 1000000;
		for (int z = 0;z*z*z <= e; z++) {
			for (int y = 0;; y++) {
				if ((x = e - y*y - z*z*z) >= 0) {
					m = min(m, x + y + z);
				}
				else
					break;
			}
		}
		cout << m << endl;
	}
	return 0;
}