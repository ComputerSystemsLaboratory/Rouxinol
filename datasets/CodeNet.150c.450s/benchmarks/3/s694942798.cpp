#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string str, func, x;
	int a, b, num;
	cin >> str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> func >> a >> b;
		//cout << x;
		if (func == "replace") {
			cin >> x;
			for (int j = 0; j < b - a + 1; j++) {
				str[j + a] = x[j];
			}
		}
		if (func == "reverse") {
			for (int j = 0; j < (int)((b - a + 1) / 2); j++) {
				char ch = str[a + j];
				str[a + j] = str[b - j];
				str[b - j] = ch;
			}
		}
		if (func == "print") {
			for (int i = 0; i < b - a + 1; i++) {
				cout << str[a + i];
			}
			cout << endl;
		}
	}

	return 0;
}