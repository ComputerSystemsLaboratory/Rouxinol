#include <iostream>
using namespace std;

const int coin[] = { 500, 100, 50, 10, 5, 1 };

int main() {

	int change, coins, t;

	while (cin >> change, change) {
		change = 1000 - change;

		coins = 0;
		for (int i = 0; i < 6; ++i) {
			if (change >= coin[i]) {
				t = change / coin[i];
				coins += t;
				change -= t * coin[i];
				if (!change)
					break;
			}
		}
		cout << coins << endl;
	}
	return 0;
}