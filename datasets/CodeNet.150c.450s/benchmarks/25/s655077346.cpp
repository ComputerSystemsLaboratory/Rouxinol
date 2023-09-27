#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	vector<int> cnt(26);
	while (cin >> s) {
		for (char c : s) {
			if (c >= 'a' && c <= 'z') {
				cnt[c - 'a']++;
			}
			else if (c >= 'A' && c <= 'Z') {
				cnt[c - 'A']++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " : " << cnt[i] << endl;
	}
	return 0;
}