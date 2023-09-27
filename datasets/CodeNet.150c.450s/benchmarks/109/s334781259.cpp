#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#define int long long
using namespace std;

signed main() {
	int a;
	while (cin >> a,a) {
		multimap<int, int>s;
		multimap<int, int>o;
		for (int b = 0; b < a; b++) {
			string c;
			cin >> c;
			int e =(c[0]-48) * 36000 + (c[1] - 48) * 3600 + (c[3] - 48) * 600 + (c[4] - 48) * 60 + (c[6] - 48)*10+ (c[7] - 48);
			s.insert(pair<int, int>(e, 1));
			cin >> c;
			e = (c[0] - 48) * 36000 + (c[1] - 48) * 3600 + (c[3] - 48) * 600 + (c[4] - 48) * 60 + (c[6] - 48)*10 + (c[7] - 48);
			o.insert(pair<int, int>(e, -1));
		}
		for (auto w = s.begin(); w != s.end(); w++) {
			o.insert(pair<int, int>((*w).first, (*w).second));
		}
		int p = 0, q = 0;
		for (auto g = o.begin(); g != o.end(); g++) {
			q += (*g).second;
			p = max(p, q);
		}
		cout << p << endl;
	}
}