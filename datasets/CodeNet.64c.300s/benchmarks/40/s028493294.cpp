#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string s;
	int a;
	getline(cin, s);
	a = s.size();
	for (int i = 0; i < a; i++) {
		if (s[i] >= 'a'&&s[i] <= 'z') {
			s[i] = s[i] - 'a' + 'A';
		}
		else if (s[i] >= 'A'&&s[i] <= 'Z') {
			s[i] = s[i] - 'A' + 'a';
		}
	}
	cout << s << endl;
	return 0;
}