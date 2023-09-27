#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	map<string, int> a;
	int f = 0, l = 0;
	string s, t;
	for (string b; cin >> b;) {
		if (f < ++a[b]) {
			s = b;
			f = a[b];
		}
		if (l < b.size()) {
			t = b;
			l = b.size();
		}
	}
	cout << s << " " << t << endl;
	return 0;
}