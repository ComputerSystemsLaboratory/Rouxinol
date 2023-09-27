#include <iostream>
using namespace std;

int main()
{

	int price, change, coin_num, cnt;
	int coin_kind[] = {500, 100, 50, 10, 5, 1};

	while(cin >> price, price > 0) {
		coin_num = 0;
		cnt = 0;
		change = 1000 - price;
		while(change > 0) {
			if(change - coin_kind[cnt] >= 0) {
				coin_num++;
				change -= coin_kind[cnt];
			}
			else {
				cnt++;
			}
		}
		cout << coin_num << endl;
	}

	return 0;

}