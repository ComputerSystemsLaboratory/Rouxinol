#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int parse(string a) {
	int b = 0;
	for (char c : a) {
		b = b * 10 + c - 48;
	}
	return b;
}
int main() {
	int a, b;
	while (cin >> a >> b,a|b) {
		string c = to_string(a);
		vector<int>V;
		unordered_map<int, int>M;
		M[a] = 0;
		V.push_back(a);
		for (int d = 0;; d++) {
			while (c.length() < b)c = "0" + c;
			sort(c.begin(), c.end());
			int k = parse(c);
			reverse(c.begin(), c.end());
			k = parse(c) - k;
			auto p = find(V.begin(), V.end(), k);
			if (p != V.end()) {
				cout << M[*p] << " " << *p << " " << d + 1 - M[*p] << endl;
				break;
			}
			M[k] = d + 1;
			V.push_back(k);
			c = to_string(k);
		}
	}
}