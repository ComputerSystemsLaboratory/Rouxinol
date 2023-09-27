#include<iostream>
using namespace std;

int main() {
	int money = 100000;
	int week;
	cin >> week;
	for (int i = 0; i < week; i++) {
		money = money*1.05;
		if (money % 1000 == 0)continue;
		else money = 1000 * (money / 1000 + 1);
	}
	cout << money << endl;
}