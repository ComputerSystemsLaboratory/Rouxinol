#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	while (true) {
		cin >> str;
		if (str.size() == 1 && str.at(0) == '0')
			break;
		int sum = 0;
		for (int i = 0; i < str.size(); i++)
			sum += str.at(i) - '0';
		cout << sum << endl;
	}
	return 0;
}