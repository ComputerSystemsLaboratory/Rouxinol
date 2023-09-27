#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	string s;
	cin >> s;
	for (i = 0; i <= 20; i++) {
		if (s[i] == 0)
			break;
	}
	for (i--; i >= 0; i--) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
