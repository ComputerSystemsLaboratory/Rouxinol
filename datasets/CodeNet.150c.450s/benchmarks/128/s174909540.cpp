#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	cin >> str;
	int n = str.length();
	string r_str;
	for(int i = 0; i < n; i++) {
		r_str += str.at(n - i - 1);
	}
	cout << r_str << endl;
	return 0;
}