#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int ch[27] = { 0 };
string s;

int main(){
	int p;
	while (cin >> s) {
		for (int i = 0; i < s.size(); i++) {
			p = tolower(s[i]) - 'a';
			if (p >= 0 && p < 26)
				ch[p]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " : " << ch[i] << endl;
	}

	return 0;
}