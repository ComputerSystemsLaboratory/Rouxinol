#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, ord;
	int n = 0;

	cin >> str;
	cin >> n;

	for (int i = 0; i < n; i++) {

		string temp;
		int a = 0, b = 0;

		cin >> ord;

		if (ord == "print") {
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (ord == "reverse") {
			cin >> a >> b;
			for (int j = 0; j <= b - a; j++)
				temp += str[b - j];
			str.replace(a, b - a + 1, temp);
		}
		else if (ord == "replace") {
			cin >> a >> b >> temp;
			str.replace(a, b - a + 1, temp);
		}
	}
    return 0;
}