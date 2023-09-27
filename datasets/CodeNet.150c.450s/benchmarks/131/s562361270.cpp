#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

class Solver {
};

int main() {
	while(true) {
		int a0, l;
		cin >> a0 >> l;
		if (a0 == 0 && l == 0)break;

		map<int, int> mp;
		mp.emplace(a0, 0);
		int a = a0;
		for (int i = 1; i < 50; i++) {
			vector<int> nums(l, 0);
			for (int j = 0; j < l; j++) {
				nums[j] = a % 10;
				a /= 10;
			}
			sort(nums.begin(), nums.end());
			int max = 0;
			int min = 0;
			int div = 1;
			for (int j = 0; j < l; j++) {
				max += nums[j] * div;
				min += nums[l - j - 1] * div;
				div *= 10;
			}
			a = max - min;

			if (mp.find(a) != mp.end()) {
				cout << mp[a] << ' ' << a << ' ' << i - mp[a] << endl;
				break;
			}
			mp.emplace(a, i);
		}
	}
}
