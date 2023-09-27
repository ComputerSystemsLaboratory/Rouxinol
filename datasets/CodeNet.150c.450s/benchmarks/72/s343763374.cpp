#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;

	getline(cin, s);
	for (unsigned int i = 0; i < s.length(); ++i) {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		else if (islower(s[i]))
			s[i] = toupper(s[i]);
	}
	cout << s << endl;

	return 0;
}
