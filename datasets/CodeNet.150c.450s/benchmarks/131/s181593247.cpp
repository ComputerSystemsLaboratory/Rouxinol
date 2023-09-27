#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;

template<class T> inline string toString(T x) {
	ostringstream sout;
	sout << x;
	return sout.str();
}

int n;
string num;

void zerofill() {
	int size = num.size();
	for (int i = 0; i < n - size; i++) {
		num = "0" + num;
	}
}

void solve() {
	zerofill();
	vector<string> nums;
	nums.push_back(num);
	for (int i = 0; i < 24; i++) {
		sort(num.begin(), num.end());
		int l = atoi(num.c_str());
		sort(num.rbegin(), num.rend());
		int g = atoi(num.c_str());
		num = toString(g - l);
		zerofill();
		nums.push_back(num);
	}
	for (unsigned i = 0; i < nums.size(); i++) {
		unsigned int p;
		for (p = i + 1; p < nums.size(); p++) {
			if (nums[i] == nums[p]) {
				break;
			}
		}
		if (p != nums.size()) {
			cout << i << ' ' << atoi(nums[p].c_str()) << ' ' << p - i << endl;
			return;
		}
	}
}

int main() {
	while (cin >> num >> n, !(num == "0" && n == 0)) {
		solve();
	}
}