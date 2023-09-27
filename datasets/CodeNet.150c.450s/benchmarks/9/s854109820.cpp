#include "bits/stdc++.h"
using namespace std;
int main() {
	string s, ss;
	int n, m;
	while (true) {
		cin >> s;
		if(s=="-"){return 0;}
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> m;
			s.insert(s.length(), s.substr(0, m));
			s.erase(0,m);
		}
		cout << s << endl;
	}
}