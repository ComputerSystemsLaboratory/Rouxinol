#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> nums;
int h, w;

bool dfs(int idx, int x, int y) {
	if (idx == 10) {
		return true;
	}
	bool ok = false;
	int z = nums[idx];
	if (x < z) {
		ok = dfs(idx + 1, z, y);
		if (ok) {
			return true;
		}
	}
	if (y < z) {
		ok = dfs(idx + 1, x, z);
		if (ok) {
			return true;
		}
	}

	return false;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		nums.assign(10, 0);
		for (int j = 0; j < 10; j++) {
			cin >> nums[j];
		}
		bool ok = dfs(0, -1, -1);
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}