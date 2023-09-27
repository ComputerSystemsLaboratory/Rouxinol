#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	string s, p; cin >> s >> p;
	s += s;
	rep(i, s.size() - p.size() + 1) {
		if (s.substr(i, p.size()) == p) {
			puts("Yes"); return 0;
		}
	}
	puts("No");
}