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
	for (string s; cin >> s&&s != "-";) {
		int m; cin >> m;
		for (int i = 0; i < m; i++) {
			int a; cin >> a;
			s = s.substr(a, s.size() - a) + s.substr(0, a);
		}
		cout << s << endl;
	}
	return 0;
}