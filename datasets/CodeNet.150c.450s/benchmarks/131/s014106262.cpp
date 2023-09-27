#include <bits/stdc++.h>
using namespace std;

#define int long long

string to_s(int n, int l) {
	string s;
	while ( n ) {
		s.push_back((n%10)+'0');
		n /= 10;
	}
	for ( int i = s.size(); i < l; i++ ) {
		s.push_back('0');
	}

	return s;
}

signed main() {
	int a, l;
	while ( cin >> a >> l, a+l ) {
		map<int, int> m;
		m[a] = 1;
		int cnt = 2;
		while ( 1 ) {
			string s = to_s(a, l);
			sort(s.begin(), s.end());
			int b = 0;			
			for ( int i = l-1; i >= 0; i-- ) {
				b *= 10;
				b += (s[i]-'0');
			}
			int c = 0;
			for ( int i = 0; i < l; i++ ) {
				c *= 10;
				c += (s[i]-'0');
			}
			a = b-c;
			if ( m[a] ) {
				cout << m[a]-1 << " " << a << " " << cnt-m[a] << endl;
				break;
			}
			m[a] = cnt;
			cnt++;
		}
	}
	return 0;
}

