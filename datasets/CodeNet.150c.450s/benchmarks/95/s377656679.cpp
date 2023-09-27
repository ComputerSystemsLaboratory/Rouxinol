#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int n,count=0;
	bool left = true, right = true, all = true;
	vector<string> v;
	for (;;) {
		cin >> n;
		if (n == 0)break;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		for (int i = 0; i < n; i++) {
			if (v[i] == "lu") left = false;
			if (v[i] == "ru") right = false;
			if (v[i] == "ld") left = true;
			if (v[i] == "rd") right = true;

			if (all == true) {
				if (left == false && right == false) {
					count++;
					all = false;
				}
			}
			else {
				if (left == true && right == true) {
					count++;
					all = true;
				}
			}
			
		}
		cout << count << endl;
		count = 0;
		left = true; right = true; all = true;
	}
}