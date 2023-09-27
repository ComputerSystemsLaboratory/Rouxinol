#include <bits/stdc++.h>

using namespace std;

int main() {
	string s, t; cin >> s >> t;
	s += s;
	for (int i = 0; i < s.size()-t.size()+1; ++i) {
		if ( s.substr(i, t.size()) == t ) {
			cout << "Yes" << endl;
			exit(0);
		}
	}
	cout << "No" << endl;
}