#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int t; cin >> t;
	while(t --) {
		int a[10];
		for(int i = 0; i < 10; i ++)
			cin >> a[i];
		bool f = false;
		auto check = [](auto v) {
			for(int i = 0; i + 1 < v.size(); i ++)
				if(v[i] > v[i + 1])
					return false;
			return true;
		};
		for(int k = 0; k < (1 << 10); k ++) {
			vector <int> u, v;
			for(int i = 0; i < 10; i ++)
				if((k >> i) & 1)
					u.push_back(a[i]);
				else
					v.push_back(a[i]);
			f |= check(u) && check(v);
		}
		cout << (f ? "YES\n" : "NO\n");
	}
	return 0;
}