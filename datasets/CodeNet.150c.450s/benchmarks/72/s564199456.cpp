#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (string::iterator it = s.begin(); it != s.end(); it++) {
		char c = (char)*it;
		if (isalpha(c))
			if (isupper(c))
				*it = tolower(c);
			else
				*it = toupper(c);
	}
	cout << s << endl;

	return 0;
}