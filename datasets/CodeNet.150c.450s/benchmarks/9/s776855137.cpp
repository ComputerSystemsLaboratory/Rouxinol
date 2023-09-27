#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

string beautify(string str) {
	string ret = "";
	for (int i = 0; i < str.size(); ++i) {
		char c = str[i];
		if ('a' <= c && c <= 'z') ret += c;
		else if ('A' <= c && c <= 'Z') ret += (char)(c-'A'+'a');
	}
	return ret;
}

string shuffle(string str, int n) {
	string ret = "";
	for (int i = n; i < str.size(); ++i) {
		ret += str[i];
	}
	for (int i = 0; i < n; ++i) {
		ret += str[i];
	}
	return ret;
}

int main() {
	string str;
	while ( cin >> str && str != "-" ) {
		int n; cin >> n;
		for (int i = 0; i < n; ++i) {
			int h; cin >> h;
			str = shuffle(str, h);
		}
		cout << str << endl;
	}
}