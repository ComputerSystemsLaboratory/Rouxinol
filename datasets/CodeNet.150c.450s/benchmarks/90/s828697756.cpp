#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	map <int, int> mp;
	for(int n; cin >> n; )
		mp[n] ++;
	int f = 0;
	for(auto p : mp)
		f = max(f, p.second);
	for(auto p : mp)
		if(f == p.second)
			cout << p.first << '\n';
	return 0;
}