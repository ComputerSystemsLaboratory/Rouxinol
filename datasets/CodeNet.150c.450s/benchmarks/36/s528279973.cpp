#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int d, newd, s = 0;
	while (cin >> d) {
		s = 0;
		newd = d;
		while (newd < 600) {
			s += d * pow(newd, 2);
			newd += d;
		}
		cout << s << endl;
	}
}