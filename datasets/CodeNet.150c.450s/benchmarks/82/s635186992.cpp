#include <bits/stdc++.h>

using namespace std;

int DiceInfo[7];
vector<string> DicePosition;
const string WEDirection = "364136";
const string NSDirection = "265126";
const string LRDirection = "453245";

void swap(string &ans, int pos, const string &direction) {
	char tmp;

	tmp = ans[direction[pos] - '0'];
	ans[direction[pos + 0] - '0'] = ans[direction[pos + 1] - '0'];
	ans[direction[pos + 1] - '0'] = ans[direction[pos + 2] - '0'];
	ans[direction[pos + 2] - '0'] = ans[direction[pos + 3] - '0'];
	ans[direction[pos + 3] - '0'] = tmp;
	//cout << "=" << ans << endl;
}

void solve() {
	int len;
	string ans;

	ans = "0123456";
	DicePosition.push_back(ans);
	for (int i = 0; i < 3; ++i) {
		swap(ans, i, WEDirection);
		DicePosition.push_back(ans);
	}

	len = DicePosition.size();
	for (int i = 0; i < len; ++i) {
		ans = DicePosition[i];
		for (int k = 0; k < 3; ++k) {
			swap(ans, k, NSDirection);
			DicePosition.push_back(ans);
		}
	}

	len = DicePosition.size();
	for (int i = 0; i < len; ++i) {
		ans = DicePosition[i];
		for (int k = 0; k < 3; ++k) {
			swap(ans, k, LRDirection);
			DicePosition.push_back(ans);
		}
	}
}

int judge(int up, int front) {
	int len;

	len = DicePosition.size();
	for (int i = 0; i < len; ++i) {
		if (DiceInfo[DicePosition[i][1] - '0'] == up
			&& DiceInfo[DicePosition[i][2] - '0'] == front) {
			return DiceInfo[DicePosition[i][3] - '0'];
		}
	}
}

int main() {
	int q, up, front;

	for (int i = 1; i < 7; ++i) {
		cin >> DiceInfo[i];
	}
	solve();
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> up >> front;
		cout << judge(up, front) << endl;
	}

	return 0;
}
