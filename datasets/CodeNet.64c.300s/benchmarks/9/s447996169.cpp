#include <iostream>

using namespace std;

int main() {

	double money = 100000;
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		//???????????????
		money *= 1.05;
		//1000??????????????°?????????
		double miman = money - ((int)(money*0.001)) * 1000.0;
		if (miman > 0) {
			money = money - miman + 1000.0;
		}
	}

	cout << (int)money << endl;

	return 0;

}