#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n = 0;
	string str, maxi;
	vector<string> v;
	vector<int> mode;

	while (cin >> str) {
		v.push_back(str);
		mode.push_back(1);
		if (str.size() > maxi.size()) {
			maxi = str;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (v[i] == v[j] && i != j) {
			 mode[i]++;
			}
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (mode[n] < mode[i]) {
			n = i;
		}
	}

	cout << v[n] << " " << maxi << endl;
}