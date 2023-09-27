#include <iostream>
#include <string>
using namespace std;

int main() {
	int m, h;
	string str,cpy;

	while (1) {
		cin >> str;
		if (str == "-")
			break;

		cpy = str;
		cin >> m;

		for (int i = 0;i < m;i++) {
			cin >> h;

			for (int j = 0;j < str.length() - h;j++)
				cpy[j] = str[j+h];

			for (int j = str.length() - h;j < str.length();j++)
				cpy[j] = str[j - str.length() + h];

			for (int j = 0;j < str.length();j++)
				str[j] = cpy[j];
		}
		cout << str << endl;
	}
	return 0;
}