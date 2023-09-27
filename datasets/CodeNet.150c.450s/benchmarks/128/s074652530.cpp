#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int n;
	cin >> str;
	n = str.length();
	for(int i = n - 1; i >= 0; i--) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}