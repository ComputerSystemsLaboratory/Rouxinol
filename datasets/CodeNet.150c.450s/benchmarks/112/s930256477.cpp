#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)


int main() {
	int n, m;
	while(1) {
		cin >> n;
		if(n == 0) break;
		
		char ch[26], CH[26];
		char num[10];
		rep(i,26) {
			ch[i] = (char)('a' + i);
			CH[i] = (char)('A' + i);
		}
		rep(i,10) {
			num[i] = (char)('0' + i);
		}

		char c, nc;
		rep(i,n) {
			cin >> c >> nc;
			if(islower(c)) {
				ch[c - 'a'] = nc;
			} else if(isupper(c)) {
				CH[c - 'A'] = nc;
			} else {
				num[c - '0'] = nc;
			}
		}
		cin >> m;
		rep(i,m) {
			cin >> c;
			if(islower(c)) {
				cout << ch[c - 'a'];
			} else if(isupper(c)) {
				cout << CH[c - 'A'];
			} else {
				cout << num[c - '0'];
			}
		}
		cout << endl;
	}
	return 0;
}