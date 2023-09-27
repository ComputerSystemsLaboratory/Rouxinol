#include<iostream>
using namespace std;
int main() {
	int n;
	int k, money;
	money = 100000;
	cin >> n;

	for (int i = 0; i < n; i++) {
		money = money * 1.05;

		k = money % 1000;
		if (k > 0) {
			money = money - k + 1000;
		}
	}
	cout << money << endl;
}