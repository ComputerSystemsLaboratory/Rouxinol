#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i)
	{
		if (isspace(s[i]));
		else if (isupper(s[i]))
			s[i] = tolower(s[i]);

		else if (islower(s[i]))
			s[i] = toupper(s[i]);

		cout << s[i];
	}

	cout << endl;

	return 0;
}