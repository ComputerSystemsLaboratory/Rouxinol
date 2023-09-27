#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string s; int n, r, c, h[20007], l[20007], a[10007];
int main() {
	cin >> s; n = s.size();
	for(int i = 0; i < n; i++) {
		switch(s[i]) {
			case 47: h[i + 1] = h[i] + 1; break;
			case 95: h[i + 1] = h[i]; break;
			case 92: h[i + 1] = h[i] - 1; break;
		}
	}
	for(int i = 0; i <= n; i++) {
		int lc = h[i], rc = h[i];
		for(int j = 0; j < i; j++) lc = max(lc, h[j]);
		for(int j = i + 1; j <= n; j++) rc = max(rc, h[j]);
		l[i] = min(lc, rc);
	}
	int ret = 0;
	for(int i = 0; i < n; i++) ret += (l[i + 1] - h[i + 1]) + (l[i] - h[i]);
	cout << ret / 2 << endl;
	for(int i = 0; i <= n; i++) {
		if(l[i] == h[i] && r) a[c++] = r / 2, r = 0;
		if(i != n) r += (l[i + 1] - h[i + 1]) + (l[i] - h[i]);
	}
	cout << c;
	for(int i = 0; i < c; i++) cout << ' ' << a[i];
	cout << endl;
}