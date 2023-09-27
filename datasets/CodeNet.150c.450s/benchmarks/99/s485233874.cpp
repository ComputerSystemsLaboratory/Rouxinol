#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int decode(const string& s) {
	int res = 0;
	int digit = 1;
	rep(i, s.length()) {
		if('0'<=s[i] && s[i]<='9') {
			digit = s[i]-'0';
		} else {
			int base = 0;
			switch(s[i]) {
				case 'm': base=1000; break;
				case 'c': base=100; break;
				case 'x': base=10; break;
				case 'i': base=1; break;
			}
			res += base * digit;
			digit = 1;
		}
	}
	return res;
}

string encode(const int n) {
	string res = "";
	int th=n/1000, hu=(n/100)%10, te=(n/10)%10, on=n%10;
	if(th>1) res += ('0'+th);
	if(th>0) res += 'm';
	if(hu>1) res += ('0'+hu);
	if(hu>0) res += 'c';
	if(te>1) res += ('0'+te);
	if(te>0) res += 'x';
	if(on>1) res += ('0'+on);
	if(on>0) res += 'i';
	return res;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		string a, b;
		cin >> a >> b;
		int ia = decode(a);
		int ib = decode(b);
		int sum = ia + ib;
		cout << encode(sum) << endl;
	}
	return 0;
}