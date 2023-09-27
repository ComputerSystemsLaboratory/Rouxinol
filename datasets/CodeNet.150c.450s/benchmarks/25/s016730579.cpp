#include <iostream>

using namespace std;

int main() {
	char ch;
	int count[26] = {0};
	while ( cin >> ch ) {
		if (isalpha(ch)) {
			char u = 'A';
			char l = 'a';
			for (int i = 0; i < 26; i++) {
				if (ch == u++ || ch == l++) {
					count[i] += 1;
					break;
				}
			}
		}
	}
	char l = 'a';
	for (int i = 0; i < 26; i++)
		cout << l++ << " : " << count[i] << endl;
	return 0;
}