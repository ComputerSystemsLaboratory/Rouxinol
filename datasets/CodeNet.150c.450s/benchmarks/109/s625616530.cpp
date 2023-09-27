#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
int cnt[86401];

int toSec(string s) {
	int h = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[3] - '0') * 10 + (s[4] - '0');
	int sec = (s[6] - '0') * 10 + (s[7] - '0');
	return h * 3600 + m * 60 + sec;
}

int main() {
	while (cin >> n) {
		if (!n) return 0;
		
		int i;
		for (i = 0; i < 86400; i++) cnt[i] = 0;
		for (i = 0; i < n; i++) {
			string s, t;
			cin >> s >> t;
			cnt[toSec(s)]++;
			cnt[toSec(t)]--;
		}
		for (i = 1; i < 86400; i++) cnt[i] += cnt[i - 1];
		int ans = 0;
		for (i = 0; i < 86400; i++) ans = max(ans, cnt[i]);
		cout << ans << endl;
	}
	return 0;
}