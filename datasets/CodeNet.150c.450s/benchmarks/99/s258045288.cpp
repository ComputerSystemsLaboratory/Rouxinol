#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)

char mcxi[4] = { 'i','x','c','m' };

int decode(string s);
string encode(int n);

int main() {
	int sum, n; cin >> n;
	while (n--) {
		string s1, s2; cin >> s1 >> s2;
		sum = decode(s1) + decode(s2);
		cout << encode(sum) << endl;
	}
	return 0;
}

int decode(string s) {
	int sum = 0;
	rep(i, (int)s.size()) {
		int coe = 1;
		if (1 < s[i] - '0'&&s[i] - '0' <= 9) coe = s[i++] - '0';
		rep(j, 4) {
			if (s[i] == mcxi[j]) {
				sum += coe*(int)pow(10.0, j);
				break;
			}
		}
	}
	return sum;
}

string encode(int n) {
	string s;
	int tmp;
	for (int i = 3; i >= 0; i--) {
		tmp = (int)(n / pow(10.0, i));
		if (tmp > 1) {
			s.push_back(tmp + '0');
			s.push_back(mcxi[i]);
			n -= (int)(tmp*(pow(10.0, i)));
		}
		else if (tmp == 1) {
			s.push_back(mcxi[i]);
			n -= (int)(pow(10.0, i));
		}
	}
	return s;
}