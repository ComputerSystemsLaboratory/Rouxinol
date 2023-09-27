#include <string>
#include <iostream>
using namespace std;

int main() {
	int a, b;
	string str;
	cin >> a >> b;
	if (a < b) {
		str = "a < b";
	}
	else if (a > b) {
		str = "a > b";
	}
	else {
		str = "a == b";
	}
	cout << str << endl;
	return 0;
}