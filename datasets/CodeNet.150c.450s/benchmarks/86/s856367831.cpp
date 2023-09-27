// AOJ 2018

#include <iostream>

using namespace std;

int main(void)
{
	int n, m, p, x;
	while(cin >> n >> m >> p, n && m){
		int win = 0, money, sum = 0;
		
		for (int i = 1; i <= n; i++){
			cin >> x;
			if (i == m) win = x;
			sum += x;
		}

		money = sum * 100;
		money -= (int)(money * (p / 100.0));
		// cout << money << endl;

		cout << (win == 0 ? 0 : money / win) << endl;
	}

	return 0;
}