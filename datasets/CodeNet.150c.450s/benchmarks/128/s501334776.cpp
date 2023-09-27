#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[25];
	for (int i = 0;i < 25;i++) {
		str[i] = '\0';
	}
	cin >> str;
	for (int i = 24; i >= 0; i--) {
		if (str[i] == '\0') continue;
		cout << str[i];
	}
	cout << endl;
	return 0;
}