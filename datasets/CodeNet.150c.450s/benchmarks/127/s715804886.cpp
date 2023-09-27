#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string prefix(string s, int n) {
	string ret;
	for (int i = 0; i < n; i++) ret += s[i];
	return ret;
}

string suffix(string s, int n) {
	string ret;
	for (int i = 0; i < n; i++) ret += s[s.length() - 1 - i];
	return ret;
}

string reverse(string s) {
	int l = 0, r = s.length() - 1;
	while (l < r) {
		swap(s[l], s[r]);
		l++; r--;
	}
	return s;
}

int m;
string s;

int main() {
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s;
		
		int n = s.length();
		vector<string> hensei;
		
		for (int j = 1; j < n; j++) {
			for (int k = 0; k < 8; k++) {
				string t[2] = {prefix(s, j), suffix(s, n - j)};
				if ((k >> 2) & 1) t[0] = reverse(t[0]);
				if ((k >> 1) & 1) t[1] = reverse(t[1]);
				hensei.push_back(t[k % 2] + t[(k + 1) % 2]);
			}
		}
		sort(hensei.begin(), hensei.end());
		hensei.erase(unique(hensei.begin(), hensei.end()), hensei.end());
		
		cout << hensei.size() << endl;
	}
	return 0;
}