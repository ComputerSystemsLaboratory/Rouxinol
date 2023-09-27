#include <iostream>
#include <string>

#include <stdio.h>
using namespace std;

int main(void) {
	string s;
	int countChar[26] = {};
	while (1) {
		getline(cin, s);
		if (cin.eof()) break;
		for (int i = 0; i < s.length(); i++) {
			if (isupper(s[i]))
				s[i] = tolower(s[i]);
			countChar[s[i] - 'a']++;
		}
	}

	for (int i = 0; i < sizeof(countChar)/sizeof(int); i++) {
		cout << (char) (i + (int) 'a') << " : " << countChar[i] << endl;
	}

	return 0;
}

