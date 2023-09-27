#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
//#include "toollib.h"
#pragma warning (disable:4018)
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<vector<int>> groups(n);
	for (int i = 0; i < n; i++) {
		groups[i].push_back(i);
	}
	vector<int> ret;
	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0) {
			int a = -1, b = -1;
			for (int j = 0; j < groups.size(); j++) {
				for (int k = 0; k < groups[j].size(); k++) {
					if (groups[j][k] == x) a = j;
					if (groups[j][k] == y) b = j;
				}
				if (a != -1 && b != -1)break;
			}
			if (a != b) {
				for (int k = 0; k < groups[b].size(); k++) {
					groups[a].push_back(groups[b][k]);
				}
				groups.erase(groups.begin() + b);
			}
		}
		else {
			int mode = 0;
			for (int j = 0; j < groups.size(); j++) {
				for (int k = 0; k < groups[j].size(); k++) {
					if (mode == 0) {
						if (groups[j][k] == x || groups[j][k] == y) mode = 1;
					}
					else if (mode == 1) {
						if (groups[j][k] == x || groups[j][k] == y) mode = 2;
					}
				}
				if (mode == 1 || mode == 2) break;
			}
			if (mode == 1) ret.push_back(0);
			if (mode == 2) ret.push_back(1);
		}
	}
	for (int i = 0; i < ret.size(); i++) cout << ret[i] << endl;
	return 0;
}