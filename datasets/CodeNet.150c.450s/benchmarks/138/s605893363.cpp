#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int a, b,ans;
	ans = 1;
	cin >> a >> b;

	int small,big;
	small = (a > b) ? b : a;
	big = (a > b) ? a : b;

	vector<int> gcd(1);

	for (int i = 2; i <= small; i++) {
		while (small%i == 0) {
			small = small / i;
			gcd.push_back(i);
		}
	}

	for (int i = 1; i < gcd.size();i++) {
		if (big % gcd[i] == 0) {
			big = big / gcd[i];
			ans = ans * gcd[i];
		}
	}

	cout << ans << endl;

	return 0;
}
