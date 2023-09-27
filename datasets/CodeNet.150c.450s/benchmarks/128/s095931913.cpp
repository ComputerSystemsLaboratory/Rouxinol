#include <iostream>

int main() {
	using namespace std;

	string str;
	cin >> str;
	for (string::reverse_iterator rit = str.rbegin(); rit != str.rend(); ++rit) {
		cout << *rit;
	}
	cout << endl;

	return 0;
}