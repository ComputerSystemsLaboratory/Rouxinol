#include <iostream>
#include <vector>

using namespace std;

int calcCoins(int price) {
	const int coinNums[] = {500, 100, 50, 10, 5, 1};
	int result = 0;
	int remain = price;

	for (int i = 0; i < 6; i++) {
		int coinMaisu = remain / coinNums[i];
		result += coinMaisu;
		remain -= coinMaisu * coinNums[i];
	}

	return result;
}

int main(void){
    vector<int> prices;
	while (true) {
		int price;
		cin >> price;

		if (price == 0) break;
		prices.push_back(price);
	}

	for (int i = 0; i < prices.size(); i++) {
		cout << calcCoins(1000 - prices[i]) << endl;
	}
}