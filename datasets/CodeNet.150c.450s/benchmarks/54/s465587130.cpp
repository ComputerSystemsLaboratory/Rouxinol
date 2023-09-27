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

int main() {
	string word, key; cin >> key; key = beautify(key);
	int ans = 0;
	while ( cin >> word, word != "END_OF_TEXT" ) {
//		if (word[word.size()-1] == '.') word = word.substr(0, word.size()-1);
//		if (word[0] == '\"') word = word.substr(1, word.size()-1);
//		if (word[word.size()-1] == '\"') word = word.substr(0, word.size()-1);
		word = beautify(word);
		if (word == key) {
			++ans;
		}
	}
	cout << ans << endl;
}