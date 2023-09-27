#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	string str; cin >> str;
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		string s; cin >> s;
		int a, b; cin >> a >> b;
		if (s == "replace") {
			string r; cin >> r;
			str = str.substr(0, a) + r + str.substr(b + 1);
		}
		else if (s == "reverse") {
			string r = str.substr(a, b - a + 1);
			reverse(r.begin(), r.end());
			str = str.substr(0, a) + r + str.substr(b + 1);
		}
		else if (s == "print") {
			cout << str.substr(a, b - a + 1) << endl;
		}
	}
	return 0;
}