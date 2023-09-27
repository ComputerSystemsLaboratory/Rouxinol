#include<iostream>
#include<string>

using namespace std;

int main () {
	long debt=100000;
	int n;
	cin >> n;
	for (; n > 0; --n) {
		debt *= 1.05;
		long a = (debt % 1000 == 0) ? 0 : 1;
		debt = (long)(debt / 1000 + a) * 1000;
	}

	cout << debt << endl;

	return 0;
}