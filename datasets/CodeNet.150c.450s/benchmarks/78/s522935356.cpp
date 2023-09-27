#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	vector<int> data;
	vector<int> data2;
	vector<int> dp(1000001, 10);
	vector<int> dp2(1000001, 1000000);
	long long int n = 0;
	for (long long int i = 1; ; i++) {
		n = i*(i+1)*(i+2)/6;
		if (n > 1000000) {
			break;
		}
		data.push_back(n);
		dp[n] = 1;
		if (n % 2 == 1) {
			data2.push_back(n);
			dp2[n] = 1;
		}
	}

	for (int i = 0; i < data.size(); i++) {
		for (int j = data[i]+1; j <= 1000000; j++) {
			dp[j] = min(dp[j], dp[j-data[i]]+1);
		}
	}

	for (int i = 0; i < data2.size(); i++) {
		for (int j = data2[i]+1; j <= 1000000; j++) {
			dp2[j] = min(dp2[j], dp2[j-data2[i]]+1);
		}
	}

	int a;
	while (cin >> a) {

		if (a == 0) {
			break;
		}
		cout << dp[a] << ' ' << dp2[a] << endl;
	}
	return 0;
}