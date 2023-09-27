#include <iostream>
using namespace std;
int main(void) {
	long long a, b, s, x;
	while (cin >> a >> b) {
		x = 0;
		s = a + b;
		while (s >= 1) {
			x++;
			s = s / 10;
		}
		cout << x << endl;
	}
	return 0;
}