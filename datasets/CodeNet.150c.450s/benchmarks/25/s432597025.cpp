#include <iostream>

using namespace std;

int main() {

	int count[26], h;
	char str;

	for (int h = 0; h < 26; h++) {
		count[h] = 0;
	}

	while (cin >> str) {
			for (char c = 'a'; c <= 'z'; c++) {
				if (str == c || str == c + 'A' - 'a')count[c-'a']++;
				
			}
	}


	for (int h = 0; h < 26; h++) {
		cout << (char)('a' + h) << " : " << count[h] << "\n";
	}
	

	return 0;
}