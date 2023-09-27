#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* suu = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> suu[i];
	}
	vector<int> dp;
	dp.push_back(suu[0]);
	for (int i = 1;i < n;i++) {
		int index = lower_bound(dp.begin(), dp.end(), suu[i]) - dp.begin();
		if (index == dp.size()) {
			dp.push_back(suu[i]);
		}
		else {
			dp[index] = suu[i];
		}
	}
	cout << dp.size() << endl;
}
