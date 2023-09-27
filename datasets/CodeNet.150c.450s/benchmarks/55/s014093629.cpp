#include <iostream>
using namespace std;

int main() {
	char x[1000] = {};
	while (1) {
		cin >> x;
		int a = 0;
		if (x[0] == '0') break;
		for (int i = 0;x[i]!='\0';i++) {
			if (x[i] == '\n') break;
			a += x[i] - '0';
		}
		cout << a << endl;
	}
}