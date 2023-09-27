#include <iostream>

using namespace std;

int main(void) {
	int d;

	while (cin >> d) {
		int s = 0;
		for (int i = 0; i < 600; i += d) {
			s += i * i * d;
		}
		cout << s << endl;
	}
}