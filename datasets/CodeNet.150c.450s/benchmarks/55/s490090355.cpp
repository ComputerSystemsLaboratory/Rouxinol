#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum;
	string s;
	while (cin >> s, s != "0") {
		sum = 0;
		for (int i = 0; i < s.size(); i++) sum += (s[i] - 48);
		cout << sum << endl;
	}
}