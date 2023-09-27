#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int num[26],x;
	char a;

	for (int i = 0;i < 26;i++)
		num[i] = 0;

	while (cin >> str) {
		for (int i = 0;i < str.length();i++) {
			str[i] = tolower(str[i]);
			if (str[i] >= 'a'&&str[i] <= 'z') {
				x = str[i] - 'a';
				num[x]++;
			}
		}
	}
	for (int i = 0;i < 26;i++) {
		a = 'a' + i;
		cout << a << " : " << num[i] << endl;
	}

	return 0;
}