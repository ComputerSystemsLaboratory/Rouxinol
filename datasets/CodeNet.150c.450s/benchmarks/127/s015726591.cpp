#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

string rev(string s) {
	reverse(s.begin(), s.end());
	return s;
}

int main() {
	int m; cin >> m;
	while (m--) {
		string s;
		cin >> s;

		set<string> S;
		for (int i = 1; i < s.size(); i++) {
			string a = s.substr(0, i),
				b = s.substr(i),
				c = rev(a),
				d = rev(b);
			S.insert(a + b);
			S.insert(b + a);
			S.insert(a + d);
			S.insert(d + a);
			S.insert(c + b);
			S.insert(b + c);
			S.insert(c + d);
			S.insert(d + c);
		}
		cout << S.size() << endl;
	}
	return 0;
}