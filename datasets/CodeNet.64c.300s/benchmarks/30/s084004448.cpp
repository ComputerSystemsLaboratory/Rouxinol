#include <bits/stdc++.h>

using namespace std;

const int CoinType[] = { 500,100,50,10,5,1 };

int getCoin(int &rest, int coinVal) {
	int cnt;

	cnt = rest / coinVal;
	rest %= coinVal;

	return cnt;
}

int main() {
	int n, rest, sum;

	while (cin >> n, n) {
		sum = 0;
		rest = 1000 - n;
		for (int i = 0; i < 6;++i){
			sum += getCoin(rest, CoinType[i]);
		}
		cout << sum << endl;
	}

	return 0;
}
