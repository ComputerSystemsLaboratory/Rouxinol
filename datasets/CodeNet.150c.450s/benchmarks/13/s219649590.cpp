#include<iostream>
using namespace std;
#include<string>

int main() {
	string str;
	cin >> str;
	str += str;

	string temp;
	cin >> temp;

	if (str.find(temp) != -1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}