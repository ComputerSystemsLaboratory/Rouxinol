#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
	int n, m, count = 0,countt=0;
	vector<string> s;
	vector<string> ss;

	cin >> n;
	s.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	cin >> m;
	ss.resize(m);
	for (int i = 0; i < m; i++) {
		cin >> ss[i];
		for (int j = 0; j < n; j++) {
			if (ss[i] == s[j]) {
				countt++;
				count++;
				if (count % 2 == 1) {
					cout << "Opened by " + ss[i] << endl;
				}
				else {
					cout << "Closed by " + ss[i] << endl;
				}
			}
		}
		if (countt == 0) {
			cout << "Unknown " + ss[i] << endl;
		}
		countt = 0;
	}
}