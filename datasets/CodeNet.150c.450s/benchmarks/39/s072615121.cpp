#include <iostream>
#include <string>
#include <cstdlib>

#define SPACE string(" ")
using namespace std;

int main(void) {
	string str;
	getline(cin, str);

	string::size_type pos = 0;
	pos = str.find(SPACE, pos);
	int a = atoi(str.substr(0, pos).c_str());
	pos += SPACE.length();
	int b = atoi(str.substr(pos).c_str());

	cout << a * b << SPACE << 2 * a + 2 * b << endl;

	int c;
	cin >> c;

	return 0;
}