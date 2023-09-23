#include<iostream>

using namespace std;

int func(int x);

int main() {
	int x;
	while (true) {
		cin >> x;
		if (x == 0) { break; }
		cout << func(x) / 3650 + 1 << endl;
	}
	
	return 0;
}

int func(int x) {
	if (x == 1) {
		return 1;
	}
	else if (x == 2) {
		return 2;
	}
	else if (x == 3) {
		return 4;
	}
	else {
		return func(x - 1) + func(x - 2) + func(x - 3);
	}
}