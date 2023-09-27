#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int minimum_number_of_coin(const vector<int> &coins, const int &price)
{
	// number_of_coin[i] : i円を支払うための最小コイン枚数
	vector<int> number_of_coin(price + 1, price);
	number_of_coin[0] = 0;

	// 動的計画法
	for (int i = 0; i < coins.size() + 1; ++i) {
		for (int j = coins[i]; j <= price; ++j) {
			number_of_coin[j] = min(number_of_coin[j], number_of_coin[j - coins[i]] + 1);
		}
	}
	
	return number_of_coin[price];
}

int main()
{
	int n, m;
	cin >> n >> m;

	// コインの種類
	vector<int> coins(m);
	for (int i = 0; i < m; ++i) {
		cin >> coins[i];
	}

	int min = minimum_number_of_coin(coins, n);
	cout << min << endl;

	return 0;
}