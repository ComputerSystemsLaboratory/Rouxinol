#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
	char c;
	while (1) {
		scanf("%c", &c);

		if (c >= 'a' && 'z' >= c) {
			c -= 'a' - 'A';
			cout << c;
		}
		else if (c >= 'A' && 'Z' >= c) {
			c += 'a' - 'A';
			cout << c;
		}
		else if (c == '\n') {
			break;
		}
		else {
			cout << c;
		}
	}
	cout << endl;

	return 0;
}