#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int n;
	cin >> n;
	string dat[10] = {".,!? ",
										"abc",
										"def",
										"ghi",
										"jkl",
										"mno",
										"pqrs",
										"tuv",
										"wxyz"};										
	while ( n-- ) {
		string s;
		cin >> s;
		int l = s.size();
		for ( int i = 0; i < l; i++ ) {
			char c = s[i];
			int cnt = 0;
			for ( i = i+1; i < l; i++ ) {
				if ( s[i] != c ) break;
				cnt++;
			}
			i--;
			if ( c == '0' ) continue;
			int num = c-'0'-1;
			cnt %= dat[num].size();
			cout << dat[num][cnt];
		}
		cout << endl;
	}
	return 0;
}

