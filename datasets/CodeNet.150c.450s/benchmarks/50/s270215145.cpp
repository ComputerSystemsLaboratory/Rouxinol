#include<iostream>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main() {
	while (true) {
		int coin = 0;
		int price = 0;

		cin >> price;
		if (price == 0) {
			break;
		}

		price = 1000 - price;

		for (auto temp : { 500, 100, 50, 10, 5, 1 }) {
			const auto temp_div = div(price, temp);
			coin += temp_div.quot;
			price = temp_div.rem;
		}

		cout << coin << endl;
	}
	return 0;
}