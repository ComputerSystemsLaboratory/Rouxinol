#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	string str, key; cin >> str >> key;
	str += str;
	bool ans = false;
	for (int i = 0; i < str.size(); ++i) {
		bool f = true;
		for (int j = 0; j < key.size(); ++j) {
			if (i + j >= str.size()) {
				f = false;
				break;
			}
			if (str[i+j] != key[j]) {
				f = false;
				break;
			}
		}
		if (f) {
			ans = true;
			break;
		}
	}
	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
}