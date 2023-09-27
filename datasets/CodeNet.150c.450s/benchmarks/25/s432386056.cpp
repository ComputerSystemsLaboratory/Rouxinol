#include <iostream>
#include <cctype>

using namespace std;

int main() {
	char ch;
	int counter[26] = {};

	while(cin >> ch) {
		if (isalpha(ch)) {
			if (isupper(ch)) ch = tolower(ch);
			counter[ch - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		ch = 'a' + i;
		cout << ch << " : " << counter[i] << endl;
	}

	return 0;
}