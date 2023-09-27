#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int number;
	string str;
	cin >> str >> number;


	for (int i = 0; i<number; i++) {
		string com;
		cin >> com;

		if (com == "replace") {
			int n1, n2;
			string str2;
			cin >> n1 >> n2 >> str2;
			str.replace(n1, n2 - n1 + 1, str2);
		}
		else if (com == "reverse") {
			int n1, n2;
			string str_2;
			str_2 = str;
			cin >> n1 >> n2;
			for (int j = n1; j <= n2; j++) {
				str[j] = str_2[n2 + n1 - j];
			}
		}
		else if (com == "print") {
			int n1, n2;
			cin >> n1 >> n2;
			cout << str.substr(n1, n2 - n1 + 1) << endl;
		}
	}

	return 0;
}