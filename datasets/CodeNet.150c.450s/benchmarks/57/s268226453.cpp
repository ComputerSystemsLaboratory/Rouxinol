# include<iostream>
#include <string>

using namespace std;
int main() {
	int a = 0;
	int b = 0;
	string c;
	int k = 0;
	while (true)
	{
		cin >> a >> c >> b;
		if (c == "+") {
			k = a + b;
		}
		if (c == "-") {
			k = a - b;
		}
		if (c == "*") {
			k = a * b;
		}
		if (c == "/") {
			k = a / b;
		}

		if (c == "?") {
			break;
		}
		cout << k << endl;
	}
}