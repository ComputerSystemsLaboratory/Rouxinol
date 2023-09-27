#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int sum;
	while (1) {
		sum = 0;
		cin >> s;
		for (int i = 0; i < s.length();i++) {
			sum += s[i] - '0';
		}
		if (!sum) break;
		cout << sum << endl;
	}
}