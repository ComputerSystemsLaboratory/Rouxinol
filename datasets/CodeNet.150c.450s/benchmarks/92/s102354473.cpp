#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a + b < 10)
			cout << "1" << endl;
		else if (a + b < 100)
			cout << "2" << endl;
		else if (a + b < 1000)
			cout << "3" << endl;
		else if (a + b < 10000)
			cout << "4" << endl;
		else if (a + b < 100000)
			cout << "5" << endl;
		else if (a + b < 1000000)
			cout << "6" << endl;
		else if (a + b < 10000000)
			cout << "7" << endl;
		else if (a + b < 100000000)
			cout << "8" << endl;
		else if (a + b < 10000000000)
			cout << "9" << endl;
	}
	return 0;
}