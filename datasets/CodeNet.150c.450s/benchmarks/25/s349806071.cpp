#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int cnt[26];
int main() {
	string s, t;
	while (cin >> t)s += t;
	for (char c : s) {
		if (!isalpha(c))continue;
		if (islower(c))c = toupper(c);
		cnt[c - 'A']++;
	}
	rep(i, 26) {
		cout << (char)('a' + i) << " : " << cnt[i] << endl;
	}
}