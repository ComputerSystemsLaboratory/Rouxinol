#include <iostream>
#include <string>
using namespace std;

int main() {
	string x;
	int a;

	while (1) {
		cin >> x;
		if (x == "0")
			break;

		a = 0;
		for (int i = 0;i < x.length();i++) {
			a += x[i] - '0';
		}
		cout << a << endl;
	}
}