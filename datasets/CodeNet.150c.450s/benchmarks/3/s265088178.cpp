#include<iostream>

using namespace std;


bool StringCompare(const char*Str1, const char*Str2) {
	while (*Str1 != '\0' || *Str2 != '\0') {
		if (*Str1 != *Str2)return false;
		Str1++;
		Str2++;
	}
	return true;
}

int main() {
	char str[1001];
	char command[8];
	int q;
	int a, b;

	cin >> str;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> command >> a >> b;
		if (StringCompare(command, "print")) {
			for (int j = a; j <= b; j++) {
				cout << str[j];
			}
			cout << endl;
		}
		else if (StringCompare(command, "reverse")) {
			char tmp[1001];
			for (int j = b; j >= a; j--) {
				tmp[j] = str[a + b - j];
			}
			for (int j = a; j <= b; j++) {
				str[j] = tmp[j];
			}
		}
		else if (StringCompare(command, "replace")) {
			char Input[1001];
			cin >> Input;
			for (int j = a; j <= b; j++) {
				str[j] = Input[j - a];
			}
		}
	}

	return 0;
}