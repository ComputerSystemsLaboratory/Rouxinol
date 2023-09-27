#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		int a, b;
		string str;

		cin >> a >> str >> b;

		if (str == "?") {
			break;
		}

		if (str == "+") {
			cout << a + b << endl;
		}
		else if (str == "-") {
			cout << a - b << endl;
		}
		else if (str == "*") {
			cout << a*b << endl;
		}
		else {
			cout << a / b << endl;
		}
	}

	return 0;
}