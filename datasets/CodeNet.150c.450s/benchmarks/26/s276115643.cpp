#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int x = (a == b) + 2 * (a > b);

	switch (x) {
	case 0:
		cout << "a < b\n";
		break;
	case 1:
		cout << "a == b\n";
		break;
	case 2:
		cout << "a > b\n";
		break;
	}


	return 0;
}