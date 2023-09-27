#include <iostream>
using namespace std;

int DIVISOR(int num1, int num2, int num3) {
	int TIMES = 0;
	for (int i = num1; i <= num2; i++) {
		if (num3 % i == 0) {
			TIMES++;
		}
	}
	return TIMES;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << DIVISOR(a, b, c) << endl;
	return 0;
}
