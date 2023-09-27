#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int decode(string s) {
	int ret = 0;
	int tmp = 1;
	for (int i = 0; i < s.size(); i++) {
		switch (s[i]) {
		case 'm':
			ret += tmp * 1000;
			tmp = 1;
			break;
		case 'c':
			ret += tmp * 100;
			tmp = 1;
			break;
		case 'x':
			ret += tmp * 10;
			tmp = 1;
			break;
		case 'i':
			ret += tmp;
			tmp = 1;
			break;
		default:
			tmp = s[i] - '0';
			break;
		}
	}
	return ret;
}

string encode(int a) {
	string ret = "";
	if (a / 1000) {
		if (a / 1000 >= 2)ret += (char)(a / 1000 + '0');
		ret += "m";
	}
	a %= 1000;
	if (a / 100) {
		if (a / 100 >= 2)ret += (char)(a / 100 + '0');
		ret += "c";
	}
	a %= 100;
	if (a / 10) {
		if (a / 10 >= 2)ret += (char)(a / 10 + '0');
		ret += "x";
	}
	a %= 10;
	if (a) {
		if (a >= 2)ret += (char)(a + '0');
		ret += "i";
	}
	return ret;
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s, t; cin >> s >> t;
		int a = decode(s);
		int b = decode(t);
		cout << encode(a + b) << endl;
	}
	return 0;
}