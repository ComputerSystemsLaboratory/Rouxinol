#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int c[100];
	string s;
	int i, index;
	for(i = 0; i < 100; i++) c[i] = 0;
	while(1) {
		getline(cin, s);
		if(s == "\0") break;
		for(i = 0; i < s.size(); i++) {
			if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
				s[i] = tolower(s[i]);
				index = s[i] - 'a';
				c[index]++;
			}
		}
	}
	for(i = 0; i <= 'z' - 'a'; i++) {
		printf("%c : %d\n", 'a' + i, c[i]);
	}
	return 0;
}