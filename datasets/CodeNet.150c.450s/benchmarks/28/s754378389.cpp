#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int> WeightInfo;

bool judge(int w) {
	int curSum, floor;

	floor = 1;
	curSum = 0;
	for (int i = 0; i < N; ++i) {
		curSum += WeightInfo[i];
		if (curSum > w) {
			++floor;
			if (floor > K) {
				return false;
			}
			curSum = 0;
			--i;
		}
	}
	return true;
}

void solve() {
	int left, right, mid;

	left = 0;
	right = 1000000000;
	while (left < right) {
		mid = (left + right) / 2;
		if (judge(mid)) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}

	cout << left << endl;
}

int main() {
	int w;

	cin >> N >> K;
	for (int i = 0; i < N; ++i) {
		cin >> w;
		WeightInfo.push_back(w);
	}
	solve();
	
	return 0;
}
