#include<iostream>

using namespace std;

int alphabet[26];

int main() {
	char Input;

	while (cin >> Input) {
		if ('a' <= Input&&Input <= 'z')
			alphabet[Input - 'a']++;
		else if ('A' <= Input&&Input <= 'Z')
			alphabet[Input - 'A']++;
	}

	for (char i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " : " << alphabet[i] << endl;
	}

	return 0;
}