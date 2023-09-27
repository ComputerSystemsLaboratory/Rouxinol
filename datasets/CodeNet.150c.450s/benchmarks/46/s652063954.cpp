#include <iostream>
using namespace std;

int n, x;

int loop(int cnt, int sum, int plus) {
	if (cnt == 3) {
		if (sum == x) {
			return 1;
		} else {
			return 0;
		}
	}

	if (plus > n) {
		return 0;
	}

	return loop(cnt + 1, sum + plus, plus + 1) + loop(cnt, sum, plus + 1);
}

int main()
{
	while (cin >> n >> x && (n != 0 || x != 0)){
		cout << loop(0, 0, 1) << endl;
	}
}