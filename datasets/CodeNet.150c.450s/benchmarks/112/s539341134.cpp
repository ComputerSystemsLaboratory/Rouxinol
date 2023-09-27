#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>

using namespace std;
int main() {
	int n;
	for (;;) {
		cin >> n;
		if (n == 0)break;
		vector<pair<char, char>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}

		int m;
		char c;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> c;
			for (int j = 0; j < v.size(); j++) {
				if (c == v[j].first) {
					c = v[j].second;
					break;
				}
			}
			cout << c;
		}
		cout << endl;
	}
	return 0;
}