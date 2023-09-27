#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int i;
	cin >> s;
	for (i = 0; s[i + 1] != 0; i++);
	for (; i >= 0; i--)
		cout << s[i];
	cout << endl;
	return 0;
}
