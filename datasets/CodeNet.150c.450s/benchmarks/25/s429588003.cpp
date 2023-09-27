#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int main(){
	int a[26];
	for (int i = 0;i < 26;++i) {
		a[i] = 0;
	}
	char c;
	while (cin >> c) {
		char b = tolower(c);
		if ('a' <= b&&b <= 'z')   a[b - 'a']++;
	}
	for (int i = 0;i < 26;i++) {
		cout << (char)('a' + i) << " : " << a[i] << endl;
	}

	return 0;
}