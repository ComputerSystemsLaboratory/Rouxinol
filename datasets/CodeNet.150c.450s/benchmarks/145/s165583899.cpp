#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	map <string, int> mp;
	for(string s; cin >> s; )
		mp[s] ++;
	string f = "", l = "";
	for(auto p : mp) {
		string s = p.first;
		if(mp[s] > mp[f])
			f = s;
		if(s.size() > l.size())
			l = s;
	}
	cout << f << ' ' << l << '\n';
	return 0;
}