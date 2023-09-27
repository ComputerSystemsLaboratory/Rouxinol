#include <iostream>
#include <string>

using namespace std;

int main() {

	int d;
	string num;

	for (int i = 0;; i++) {
		getline(cin, num);
		if (num[0] == '0')break;
		d = 0;
		for (int j = 0; j < num.length(); j++) {
			d += num[j] - '0';
		}
		cout << d << "\n";
	}

	return 0;
}