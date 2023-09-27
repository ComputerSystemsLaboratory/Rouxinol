#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
	char m[10][10] = {
		"",
		".,!? ",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz",
	};

	int n; cin >> n;
	for (int t = 0; t < n; ++t) {
		string ans = "";
		string str; cin >> str;
		int Key = -1, cnt = 0;
		for (int i = 0; i < str.size(); ++i) {
			int key = str[i]-'0';
			if (key == 0) {
				if (cnt > 0) {
					ans += m[Key][(cnt-1)%strlen(m[Key])];
				}
				cnt = 0;
			}
			else {
				Key = key;
				++cnt;
			}
		}
		cout << ans << endl;
	}
}