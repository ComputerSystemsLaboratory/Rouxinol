#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

char change(char c)
{
	if ( isupper(c) ) {
		return tolower(c);
	} else if ( islower(c) ) {
		return toupper(c);
	} else {
		return c;
	}
}


int main() {

	string s;

	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), change);
	cout << s << endl;

	return 0;
}

