#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <queue>
#include <cmath>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (i >= k) {
			if (t > v[i - k]) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
		v.push_back(t);
	}
}
