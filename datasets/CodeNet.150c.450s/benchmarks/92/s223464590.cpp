#include <iostream>
using namespace std;
int main() {
	int number;
	int digit = 0;
	int a, b;
	while (cin >> a >> b) {
		digit=0;
		number = a + b;
		while (number != 0) {
			number = number / 10;
			++digit;
		}
		cout << digit << endl;
	}
	return 0;
}