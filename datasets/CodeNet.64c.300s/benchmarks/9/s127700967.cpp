#include <iostream>
using namespace std;

int kiriage (int m) {
	if (m % 1000 == 0) return m;
	else {
		return (m / 1000 + 1) * 1000;
	}
}

int main() {
	int n;
	cin >> n;
	int money = 100000;
	for (int i = 0; i < n; i++) {
		money *= 1.05;
		money = kiriage(money);
	}
	cout << money << endl;
	return 0;
}