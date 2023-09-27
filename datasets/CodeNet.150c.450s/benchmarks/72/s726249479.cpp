#include <iostream>
#include <string>
#include <cctype>	// ?°????????????§??????????????????????????¨

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s, s1;
	getline(cin, s);
	for (size_t i = 0; i < s.size(); i++)
	{
		if (islower(s[i]))		s[i] = toupper(s[i]);
		else if (isupper(s[i]))	s[i] = tolower(s[i]);
		else					s[i] = s[i];

	}
	cout << s << endl;
	return 0;
}