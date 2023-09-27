#include <iostream>
using namespace std;

int main()
{
	int bor_money = 100000, n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		bor_money *= 1.05;

		if (0 < (bor_money % 1000)) {
			bor_money /= 1000;
			bor_money += 1;
			bor_money *= 1000;
		}
	}
	cout << bor_money << endl;
    return 0;
}